#include <iostream>

int main() {
    int a;
    std::cout << "Enter a number" << std::endl;
    std::cin >> a;

    if (a == 0) {
        std::cout << "Zero" << std::endl;
    } else if (a > 0) {
        std::cout << "Positive" << std::endl;
    } else {
        std::cout << "Negative" <<std::endl;
    }

    int grade;
    std::cout << "Enter a grade" << std::endl;
    std::cin >> grade;

    switch (grade)
    {
    case 90 ... 100:
        std::cout << "A\n";
        break;
    case 80 ... 89:
        std::cout << "B\n";
        break;
    case 70 ... 79:
        std::cout << "C\n";
        break;
    case 60 ... 69:
        std::cout << "D\n";
        break;
    case 0 ... 59:
        std::cout << "F\n";
        break;
    default:
        std::cout << "Invalid score for grading.\n";
    }

    for (int i = 0; i < 11; ++i) {
        std::cout << i << std::endl;
    }
}

