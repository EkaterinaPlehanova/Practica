#include <iostream>
#include <stack>
#include <string>
#include <cctype>

int getPriority(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/' || op == '%')
        return 2;
    else if (op == '^')
        return 3;
    else
        return 0;
}

std::string convertToRPN(const std::string& expression) {
    std::string rpn;
    std::stack<char> operators;

    for (size_t i = 0; i < expression.length(); ++i) {
        char ch = expression[i];
        if (ch == '(') {
            operators.push(ch);
        }
        else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                rpn += operators.top();
                rpn += ' ';
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(') {
                operators.pop();
            }
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            while (!operators.empty() && getPriority(operators.top()) >= getPriority(ch)) {
                rpn += operators.top();
                rpn += ' ';
                operators.pop();
            }
            operators.push(ch);
        }
        else if (ch == '^') {
            while (!operators.empty() && getPriority(operators.top()) > getPriority(ch)) {
                rpn += operators.top();
                rpn += ' ';
                operators.pop();
            }
            operators.push(ch);
        }
        else if (isdigit(ch)) {
            std::string operand;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                operand += expression[i];
                ++i;
            }
            --i;
            rpn += operand;
            rpn += ' ';
        }
    }

    while (!operators.empty()) {
        rpn += operators.top();
        rpn += ' ';
        operators.pop();
    }

    return rpn;
}

int main() {
    std::string expression;
    std::getline(std::cin, expression); // Используем std::getline для ввода

    std::string rpn = convertToRPN(expression);
    std::cout << rpn << std::endl;

    return 0;
}
