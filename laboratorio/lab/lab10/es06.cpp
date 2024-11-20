#include <iostream>

void print_chars(char a, char b);

int main() {
    print_chars('z', 'a');
    return 0;
}

void print_chars(char a, char b) {
    std::cout << a;

    if (a < b) print_chars(a + 1, b);
    
    else if (a > b) print_chars(a - 1, b);

    else std::cout << std::endl;
}