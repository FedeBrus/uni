#include <iostream>
#include <cstdlib>

double compute(double a, double b, char op);

int main(int argc, char* argv[]) {
    
    if (argc != 4) {
        std::cerr << "Usage: [operand1] [operand2] [operator]" << std::endl;
        exit(1);
    }

    std::cout << std::atof(argv[1]) << argv[3][0] << std::atof(argv[2]) << ": ";
    std::cout << compute(std::atof(argv[1]), std::atof(argv[2]), argv[3][0]) << std::endl;

    return 0;
}

double compute(double a, double b, char op) {
    double res;

    switch (op) {
        case '+':
            res = a + b;
            break;

        case '*':
            res = a * b;
            break;

        case '-':
            res = a - b;
            break;

        case '/':
            res = a / b;
            break;

        default:
            std::cerr << "Undefined operator: ";
            res = a;
            break;
    }

    return res;
}