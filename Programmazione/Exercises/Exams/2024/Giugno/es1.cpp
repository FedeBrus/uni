#include <iostream>
#include <fstream>

struct patient {
    double weight;
    int age;
    int sugar[12][31];
};

int monitor(patient& p, int n, int ipo, int iper, int& ipo_days, double& media, double& variance);

int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cerr << "Usage: [filename] [ipo] [iper] [month number]" << std::endl;
        exit(1);
    }

    int month = atoi(argv[2]);
    int ipo = atoi(argv[3]);
    int iper = atoi(argv[4]);

    if (ipo > iper) {
        std::cerr << "Iper value cannot be smaller than ipo value" << std::endl;
        exit(2);
    }

    if (ipo < 80 || ipo > 95) {
        std::cerr << "Ipo value has to be inside the range [80, 95]" << std::endl;
        exit(3);
    }

    if (iper < 105 || ipo > 120) {
        std::cerr << "Iper value has to be inside the range [105, 120]" << std::endl;
        exit(4);
    }

    if (month < 1 || month > 12) {
        std::cerr << "Month number has to be inside the range [1, 12]" << std::endl;
        exit(5);
    }

    std::fstream input;
    input.open(argv[1]);

    if (input.fail()) {
        std::cerr << "Error occurred while trying to open file" << std::endl;
        exit(6);
    }

    patient p;
    input >> p.weight;
    input >> p.age;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 31; j++) {
            input >> p.sugar[i][j];
        }
    }

    int ipo_days = 0;
    double media = 0;
    double variance = 0;
    int iper_days = monitor(p, month, ipo, iper, ipo_days, media, variance);
    std::cout << iper_days <<  std::endl;
    std::cout << ipo_days << std::endl;
    std::cout << media << std::endl;
    std::cout << variance << std::endl;
    
    input.close();
    return 0;
}

int monitor(patient& p, int n, int ipo, int iper, int& ipo_days, double& media, double& variance) {
    int iper_days = 0;
    ipo_days = 0;
    int somma = 0;
    variance = 0;
    if (n >= 1 && n <= 12) {
        for (int i = 0; i < 31; i++) {
            if (p.sugar[n - 1][i] > iper) {
                iper_days++;
            }
            if (p.sugar[n - 1][i] < ipo) {
                ipo_days++;
            }
            somma += p.sugar[n - 1][i];
        }
    } else {
        std::cerr << "Month number has to be inside the range [1, 12]" << std::endl;
        exit(7);
    }

    media = somma / (31.0);

    for (int i = 0; i < 31; i++) {
        variance += (p.sugar[n - 1][i] * p.sugar[n - 1][i]);
    }
    variance -= 31 * media * media;
    variance /= 31;

    return iper_days;
}