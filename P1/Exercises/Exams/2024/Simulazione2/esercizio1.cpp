#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>
using namespace std;


// è possibile definire funzioni di supporto
void to_lower(char word[]);
int length(char word[]);
void rotate_left(char word[], int n);
void swap_els(char word[], int size, int a, int b);
void reverse(char word[], int size);
void reverse(char arr[], int size, int a, int b);
int check(char text[], char sstr[]);


int main(int argc, char* argv[]) {
    // inserire qui il codice
    if (argc != 2) {
        cerr << "Usage: ./a.out [filename]" << endl;
        exit(1);
    }

    char word[256];
    cout << "Inserire una stringa: ";
    cin >> word;

    int shift_val = -1;
    do {
        cout << "Inserire un numero intero positivo: ";
        cin >> shift_val;
    } while (shift_val < 0);

    to_lower(word);
    rotate_left(word, shift_val);

    fstream in;
    in.open(argv[1], ios::in);

    if (in.fail()) {
        cerr << "Error trying to open file" << endl;
        exit(2);
    }

    char buffer[256];
    int occurances = 0;
    while (in >> buffer && !in.fail()) {
        occurances += check(buffer, word);
    }

    cout << occurances << endl;

    in.close();
    return 0;
}

void to_lower(char word[]) {
    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = 'a' + word[i] - 'A';
        }
        i++;
    }
}

int length(char word[]) {
    int i = 0;
    while (word[i] != '\0') {
        i++;
    }
    return i;
}

void rotate_left(char word[], int n) {
    int size = length(word);
    if (size > 0 && n > 0) {
        n %= size;
        reverse(word, size, 0, n);
        reverse(word, size, n, size);
        reverse(word, size);
    }
}

void reverse(char word[], int size) {
    if (size > 0) {
        for (int i = 0; i < size / 2; i++)
            swap_els(word, size, i, size - i - 1);
    }
}

void reverse(char word[], int size, int a, int b) {
    if (size > 0 && a >= 0 && a <= size && b >= 0 && b <= size && a < b) {
        for (int i = a; i < (a + b) / 2; i++) {
            swap_els(word, size, i, b - 1 - (i - a));
        }
    }
}

void swap_els(char word[], int size, int a, int b) {
    int tmp = word[a];
    word[a] = word[b];
    word[b] = tmp;
}

int check(char text[], char sstr[]) {
    int text_size = length(text);
    int sstr_size = length(sstr);
    int occurances = 0;
    bool same = true;

    for (int i = 0; i < text_size - sstr_size + 1; i++) {
        same = true;
        for (int j = 0; j < sstr_size && same; j++) {
            if (sstr[j] != text[i + j]) {
                same = false;
            }
        }

        if (same) {
            occurances++;
        }
    }

    return occurances;
}