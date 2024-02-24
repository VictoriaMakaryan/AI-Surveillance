#include <iostream>

double sum(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);

int main() {
    double a, b;
    char op;
    std::cout << "Enter the first element" << std::endl;
    std::cout << "Enter the second element" << std::endl;
    std::cout << "Enter an operation" << std::endl;
    std::cin >> a >> b >> op;
    switch (op)
    {
    case '+':
        sum(a, b);
        break;
    case '-':
        sub(a, b);
        break;
    case '*':
        mul(a, b);
        break;
    case '/':
        div(a, b);
        break;
    default:
        std::cout << "Enter a valid operation" << std::endl;
    }
}

double sum(double a, double b) {
    std::cout << a + b << std::endl;
}

double sub(double a, double b) {
    std::cout << a - b << std::endl;
}

double mul(double a, double b) {
    std::cout << a * b << std::endl;
}

double div(double a, double b) {
    double res = 0;
    if (b != 0) {
        res = a / b;
        std::cout << res << std::endl;
    } else {
        std::cout << "You can not divide by 0" << std::endl;
    }
    
}