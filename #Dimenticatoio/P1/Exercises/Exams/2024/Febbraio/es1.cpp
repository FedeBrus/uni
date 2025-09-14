#include <iostream>
#include <fstream>

double percentuale(int tot, int greater);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: [filename1] [filename2]" << std::endl;
        exit(1);
    }

    std::fstream input1, input2;
    input1.open(argv[1], std::ios::in);
    input2.open(argv[2], std::ios::in);

    if (input1.fail()) {
        std::cerr << "Error occured while trying to open " << argv[1] << std::endl;
        exit(2);
    }

    if (input1.fail()) {
        std::cerr << "Error occured while trying to open " << argv[2] << std::endl;
        exit(3);
    }

    double t1, t2;
    int tot = 0;
    int greater = 0;

    while (input1 >> t1 && input2 >> t2) {
        tot++;
        if (t1 > t2) {
            greater++;
        }
    }

    input1.close();
    input2.close();

    if (tot != 0) {
        std::cout << "La percentuale e': " << percentuale(tot, greater) << "%" << std::endl;
    } else {
        std::cout << "Il numero di misurazione e' uguale a 0, non e' possibile calcoalare la percentuale" << std::endl;
    }

    return 0;
}

double percentuale(int tot, int greater) {
    return ((double)greater / tot) * 100.0;
}