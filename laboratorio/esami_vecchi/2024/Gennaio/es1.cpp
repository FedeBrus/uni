#include <iostream>
#include <fstream>

void evaluate(char line[], int arr[], int& ris);
int convert(char num[], int size);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: [inputfile] [outputfile]" << std::endl;
        exit(1);
    }

    std::fstream input, output;
    input.open(argv[1], std::ios::in);
    output.open(argv[2], std::ios::out);

    if (input.fail()) {
        std::cerr << "Error occurred while trying to open input file" << std::endl;
        exit(2);
    }

    if (output.fail()) {
        std::cerr << "Error occurred while trying to open output file" << std::endl;
        exit(3);
    }
    
    char buffer[128];
    while (input >> buffer) {
        int ris = 0;
        int arr[13];
        evaluate(buffer, arr, ris);
        int real = 0;
        for (int i = 0; i < 13; i++) {
            real += arr[i];
        }

        if (real == ris) {
            output << ris << std::endl;
        } else {
            output << "Errore" << std::endl;
        }
    };

    input.close();
    output.close();
    return 0;
}

void evaluate(char line[], int nums[13], int& ris) {
    char buffer[9];
    int idx = 0;
    int i = 0, j = 0;
    while (line[i] != '=') {
        j = 0;
        while (line[i] != '+' && line[i] != '=') {
            buffer[j] = line[i];
            j++;
            i++;
        }

        if (line[i] == '+') {
            i++;
        }

        buffer[j] = '\0';
        nums[idx] = convert(buffer, j);
        idx++;
    }
    
    j = 0;
    i++;
    while(line[i] != ';') {
        buffer[j] = line[i];
        i++;
        j++;
    }

    buffer[j] = '\0';
    ris = convert(buffer, j);

    for (; idx < 13; idx++) {
        nums[idx] = 0;
    }
}

int convert(char num[], int size) {
    int res = 0;
    for (int i = 0; i < size; i++) {
        if (num[i] == '0' || num[i] == '1') {
            if (num[i] == '1') {
                int j = 0;
                int n = 1;
                while (j < size - i - 1) {
                    n *= 2;
                    j++;
                }
                res += n;
            }
        } else {
            std::cerr << "Il numero deve essere binario" << std::endl;
            exit(1);
        }
    }

    return res;
}