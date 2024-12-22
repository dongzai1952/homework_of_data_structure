#ifndef EXPRESSION_EVALUATOR_H
#define EXPRESSION_EVALUATOR_H

#include <string>
#include <stack>
#include <cctype>
#include <cmath>
#include <stdexcept>

class ExpressionEvaluator {
public:
    // 计算中缀表达式的结果
    static double evaluate(const std::string& expression);

private:
    // 检查字符是否是数字或小数点  {true:数字}
    static bool isNumberChar(char ch);
    // 判断运算符优先级
    static int getPrecedence(char op);
    // 执行运算
    static double applyOperator(double a, double b, char op);
    // 转换字符串为数字
    static double parseNumber(const std::string& expression, size_t& i);
};

#endif // EXPRESSION_EVALUATOR_H
