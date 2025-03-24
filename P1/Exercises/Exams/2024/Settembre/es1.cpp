#include <iostream>
#include <fstream>
#include <cstring>

bool check_header(std::fstream& input, int& n_clausole, int& n_variabili);
void read_content(std::fstream& input, int** clausole, int n_clausole, int n_variabili);
void dealloc(int** clausole, int n_clausole);
void print_clauses(int** clausole);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: [filename]" << std::endl;
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (input.fail()) {
        std::cerr << "Error occured while opening or reading from file" << std::endl;
        exit(2);
    }

    int n_clausole = 0;
    int n_variabili = 0;
    check_header(input, n_clausole, n_variabili);

    int** clausole = new int*[n_clausole + 1];
    read_content(input, clausole, n_clausole, n_variabili);
    print_clauses(clausole);

    input.close();
    return 0;
}

bool check_header(std::fstream& input, int& n_clausole, int& n_variabili) {
    char buffer[256];
    input >> buffer;
    bool valid = false;

    if (std::strcmp(buffer, "p") == 0) {
        input >> buffer;
        if (std::strcmp(buffer, "cnf") == 0) {
            input >> buffer;
            n_clausole = atoi(buffer);
            input >> buffer;
            n_variabili = atoi(buffer);

            if (n_clausole > 0) {
                if (n_variabili > 0) {
                    valid = true; 
                } else {
                    std::cerr << "Number of literals is non-positive or invalid" << std::endl;
                    exit(6);
                }
            } else {
                std::cerr << "Number of clauses is non-positive or invalid" << std::endl;
                exit(5);
            }

        } else {
            std::cerr << "Missing initial 'cnf' in file header" << std::endl;
            exit(4);
        }
    } else {
        std::cerr << "Missing initial 'p' in file header" << std::endl;
        exit(3);
    }

    return valid;
}

void read_content(std::fstream& input, int** clausole, int n_clausole, int n_variabili) {
    char buffer[256];
    int num_buffer;
    int n_letterali;
    int i, j;

    for (i = 0; !input.eof() && i < n_clausole; i++) {
        input >> buffer;
        num_buffer = atoi(buffer);
        if (num_buffer <= 0) {
            std::cerr << "The must be a positive number of literals for each clause" << std::endl;
            dealloc(clausole, n_clausole);
            exit(7);
        }

        n_letterali = num_buffer;
        clausole[i] = new int[n_letterali];

        for (j = 0; !input.eof() && j < n_letterali; j++) {
            input >> buffer;
            num_buffer = atoi(buffer); 
            if (num_buffer == 0) {
                std::cerr << "A literal of value 0 is not permitted" << std::endl;
                dealloc(clausole, n_clausole);
                exit(8);
            } else if (num_buffer > n_variabili || num_buffer < -n_variabili) {
                std::cerr << "Number of variables exceeded header specifications" << std::endl;
                dealloc(clausole, n_clausole);
                exit(9);
            }

            clausole[i][j] = num_buffer;
        }
    }

    if (!input.eof()) {
        std::cerr << "Too many literals were found" << std::endl;
        exit(10);
    }
}

void dealloc(int** clausole, int n_clausole) {
    for (int i = 0; i < n_clausole; i++) {
        if (clausole[i] != nullptr) {
            delete [] clausole[i];
        }
    }

    delete [] clausole;
}

void print_clauses(int** clausole) {
    int i = 0;
    while (clausole[i] != nullptr) {
        int j = 0; 
        while (clausole[i][j] != 0) {
            std::cout << clausole[i][j] << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }

    std::cout << "p" << " cnf" << std::endl;
}