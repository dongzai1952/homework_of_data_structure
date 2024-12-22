#include <iostream>
#include <string>
#include <cassert>
#include "expression_evaluator.h"

void runTests() {
    ExpressionEvaluator evaluator;

    // 测试：基本运算
    try {
        std::cout << "Test 1: 3 + 5 = " << evaluator.evaluate("3 + 5") << std::endl;
        assert(std::abs(evaluator.evaluate("3 + 5") - 8.0) < 1e-6);
        
        std::cout << "Test 2: 10 - 2 = " << evaluator.evaluate("10 - 2") << std::endl;
        assert(std::abs(evaluator.evaluate("10 - 2") - 8.0) < 1e-6);
        
        std::cout << "Test 3: 4 * 3 = " << evaluator.evaluate("4 * 3") << std::endl;
        assert(std::abs(evaluator.evaluate("4 * 3") - 12.0) < 1e-6);
        
        std::cout << "Test 4: 20 / 5 = " << evaluator.evaluate("20 / 5") << std::endl;
        assert(std::abs(evaluator.evaluate("20 / 5") - 4.0) < 1e-6);
    } catch (const std::exception& e) {
        std::cout << "Error in basic operations: " << e.what() << std::endl;
    }

    // 测试：负数
    try {
        std::cout << "Test 5: -2 + 5 = " << evaluator.evaluate("-2 + 5") << std::endl;
        assert(std::abs(evaluator.evaluate("-2 + 5") - 3.0) < 1e-6);

        std::cout << "Test 6: 1 + -2.1 = " << evaluator.evaluate("1 + -2.1") << std::endl;
        assert(std::abs(evaluator.evaluate("1 + -2.1") - -1.1) < 1e-6);

        std::cout << "Test 7: -2.1 + -3.2 = " << evaluator.evaluate("-2.1 + -3.2") << std::endl;
        assert(std::abs(evaluator.evaluate("-2.1 + -3.2") - -5.3) < 1e-6);

        std::cout << "Test 8: 3 + -2 = " << evaluator.evaluate("3 + -2") << std::endl;
        assert(std::abs(evaluator.evaluate("3 + -2") - 1.0) < 1e-6);
    } catch (const std::exception& e) {
        std::cout << "Error in negative numbers: " << e.what() << std::endl;
    }

    // 测试：科学计数法
    try {
        std::cout << "Test 9: 1e3 = " << evaluator.evaluate("1e3") << std::endl;
        assert(std::abs(evaluator.evaluate("1e3") - 1000.0) < 1e-6);

        std::cout << "Test 10: 2e-3 = " << evaluator.evaluate("2e-3") << std::endl;
        assert(std::abs(evaluator.evaluate("2e-3") - 0.002) < 1e-6);

        std::cout << "Test 11: -3e2 = " << evaluator.evaluate("-3e2") << std::endl;
        assert(std::abs(evaluator.evaluate("-3e2") - -300.0) < 1e-6);

        std::cout << "Test 12: -1.5e3 = " << evaluator.evaluate("-1.5e3") << std::endl;
        assert(std::abs(evaluator.evaluate("-1.5e3") - -1500.0) < 1e-6);
    } catch (const std::exception& e) {
        std::cout << "Error in scientific notation: " << e.what() << std::endl;
    }

    // 测试：括号
    try {
        std::cout << "Test 13: (3 + 2) * 2 = " << evaluator.evaluate("(3 + 2) * 2") << std::endl;
        assert(std::abs(evaluator.evaluate("(3 + 2) * 2") - 10.0) < 1e-6);

        std::cout << "Test 14: (1 + 2) * (3 + 4) = " << evaluator.evaluate("(1 + 2) * (3 + 4)") << std::endl;
        assert(std::abs(evaluator.evaluate("(1 + 2) * (3 + 4)") - 21.0) < 1e-6);

        std::cout << "Test 15: (10 - (5 + 2)) = " << evaluator.evaluate("10 - (5 + 2)") << std::endl;
        assert(std::abs(evaluator.evaluate("10 - (5 + 2)") - 3.0) < 1e-6);
    } catch (const std::exception& e) {
        std::cout << "Error in parentheses: " << e.what() << std::endl;
    }

    // 测试：非法表达式
    try {
        std::cout << "Test 16: 1 ++ 2.1 = " << evaluator.evaluate("1 ++ 2.1") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression (1 ++ 2.1): " << e.what() << std::endl;
    }

    try {
        std::cout << "Test 17: 2e = " << evaluator.evaluate("2e") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression (2e): " << e.what() << std::endl;
    }

    try {
        std::cout << "Test 18: ++2.1 = " << evaluator.evaluate("++2.1") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression (++2.1): " << e.what() << std::endl;
    }

    try {
        std::cout << "Test 19: (2 + 3 = " << evaluator.evaluate("(2 + 3") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression ((2 + 3 =): " << e.what() << std::endl;
    }

    try {
        std::cout << "Test 20: 2 + 3) = " << evaluator.evaluate("2 + 3)") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression (2 + 3) =): " << e.what() << std::endl;
    }

    try {
        std::cout << "Test 21: 3 + / 2 = " << evaluator.evaluate("3 + / 2") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression (3 + / 2): " << e.what() << std::endl;
    }

    try {
        std::cout << "Test 22: 10 / 0 = " << evaluator.evaluate("10 / 0") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in illegal expression (10 / 0): " << e.what() << std::endl;
    }

    // 测试：空表达式
    try {
        std::cout << "Test 23: Empty expression = " << evaluator.evaluate("") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in empty expression: " << e.what() << std::endl;
    }
}

int main() {
    // 输入自己表达式的代码
    // std::string expression;

    // std::cout << "Enter a mathematical expression: ";
    // std::getline(std::cin, expression);

    // try {
    //     double result = ExpressionEvaluator::evaluate(expression);
    //     std::cout << "Result: " << result << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "ILLEGAL: " << e.what() << std::endl;
    // }

    // 批量测试
    runTests();
    return 0;
}
