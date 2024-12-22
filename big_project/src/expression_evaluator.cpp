#include "expression_evaluator.h"

#include <stdexcept>
#include <sstream>
#include <cmath>

bool ExpressionEvaluator::isNumberChar(char ch) {
    return std::isdigit(ch) || ch == '.';
}

int ExpressionEvaluator::getPrecedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == 'e') return 3;  //指数优先级最高
    return 0;
}

double ExpressionEvaluator::applyOperator(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throw std::invalid_argument("Division by zero");
            return a / b;
        case 'e': return a*pow(10, b);
        default: throw std::invalid_argument("Invalid operator");
    }
}

double ExpressionEvaluator::parseNumber(const std::string& expression, size_t& i) {
    std::string numStr;
    while (i < expression.size() && isNumberChar(expression[i])) {
        numStr.push_back(expression[i]);
        i++;
    }
    return std::stod(numStr);
}


double ExpressionEvaluator::evaluate(const std::string& expression) {
    std::stack<double> values; // 存储数值
    std::stack<char> operators; // 存储运算符
    size_t i = 0;
    bool expectOperator = false; // 期望下一个读入是否是操作符，由于非法判断
    int sgn = 1;  //数字的符号，正为1，负为-1

    while (i < expression.size()) {
        char ch = expression[i];

        // 跳过空格
        if (std::isspace(ch)) {
            i++;
            continue;
        }

        // 如果是数字或小数点
        if (isNumberChar(ch)) {
            values.push(sgn*parseNumber(expression, i));
            sgn = 1;  //保证负号只用一次
            expectOperator = true;
        }
        // 左括号
        else if (ch == '(') {
            operators.push(ch);
            expectOperator = false;
            i++;
        }
        // 右括号
        else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                double a, b;
                if(!values.empty()) {b = values.top(); values.pop();}
                else throw std::invalid_argument("Invalid expression: stack is empty!");
                if(!values.empty()) {a = values.top(); values.pop();}
                else throw std::invalid_argument("Invalid expression: stack is empty!");
                char op = operators.top(); operators.pop();
                values.push(applyOperator(a, b, op));   
                
            }
            if (operators.empty() || operators.top() != '(') {
                throw std::invalid_argument("Mismatched parentheses");
            }
            operators.pop(); // 弹出 '('
            expectOperator = true;
            i++;
        }
        // 如果是运算符
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == 'e') {
            if (!expectOperator) {  //不期望读到运算符却读到运算符
                if (ch == '-'){  //此时的减号为负号
                    sgn = -1;
                    i++;
                    continue;
                }
                else throw std::invalid_argument("Unexpected operator placement");
            }

            while (!operators.empty() && getPrecedence(operators.top()) >= getPrecedence(ch)) {
                double a, b;
                if(!values.empty()) {b = values.top(); values.pop();}
                else throw std::invalid_argument("Invalid expression: stack is empty!");
                if(!values.empty()) {a = values.top(); values.pop();}
                else throw std::invalid_argument("Invalid expression: stack is empty!");
                char op = operators.top(); operators.pop();
                values.push(applyOperator(a, b, op));
            }
            operators.push(ch);
            expectOperator = false;
            i++;
        }
        else {
            throw std::invalid_argument("Invalid character in expression");
        }
    }

    while (!operators.empty()) {
        double a, b;
        if(!values.empty()) {b = values.top(); values.pop();}
        else throw std::invalid_argument("Invalid expression: stack is empty!");
        if(!values.empty()) {a = values.top(); values.pop();}
        else throw std::invalid_argument("Invalid expression: stack is empty!");
        char op = operators.top(); operators.pop();
        values.push(applyOperator(a, b, op));
    }

    if (values.size() != 1) {
        throw std::invalid_argument("Invalid expression");
    }

    return values.top();
}
