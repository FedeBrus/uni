#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>
using namespace std;


// è possibile definire funzioni di supporto
bool check(char str[], char buffer[]);


int main(int argc, char * argv []) {
  
  // inserire qui il codice
    if (argc != 2) {
        cerr << "Usage: ./esercizio1.out [filename]" << endl;
        exit(1);
    }

    fstream in;
    in.open(argv[1], ios::in);

    if (in.fail()) {
        cerr << "Errore nell'apertura del file";
        in.close();
        exit(2);
    }

    char str[256];
    cout << "Inserire una stringa da cercare: ";
    cin >> str;

    char buffer[256];
    while (in >> buffer) {
        if (check(str, buffer)) 
            cout << buffer << endl;
    }

    in.close();
    return 0;
}

bool check(char str[], char buffer[]) {
    bool result = true;

    if (strlen(str) != strlen(buffer)) {
        result = false;
    }

    int i = 0;
    while (result && str[i] != '\0') {
        if (str[i] != '*' && str[i] != buffer[i]) {
            result = false;
        }
        i++;
    }

    return result;
}
