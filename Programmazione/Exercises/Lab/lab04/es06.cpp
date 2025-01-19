#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Inserire il lato a, b e c: " << std::endl;
    std::cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        
        if ((a + b >= c) && (a + c >= b) && (b + c >= a)) {
            
            double p = (a + b + c) / 2.0;
            double area = std::sqrt(p * (p - a) * (p - b) * (p - c));

            std::cout << "L'area del triangolo e': " << area << std::endl;
        
        } else {
            std::cout << "Il triangolo inserito e' degenere: " << std::endl;
        }

    } else {
        std::cout << "I lati del triangolo devono essere maggiori di 0" << std::endl;
    }
}