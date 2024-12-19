#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>

using namespace std;
// è possibile definire funzioni di supporto

int main(int argc, char * argv []) {
  
    // inserire qui il codice
    if (argc != 2) {
        cerr << "Usage: [filename]" << endl;
        exit(1);
    }

    fstream in;
    in.open(argv[1], ios::in);

    if (in.fail()) {
        cerr << "Error while opening file" << endl;
        exit(2);
    }

    bool flags[256] = {};
    char buffer[256];

    cout << "Inserire una serie di caratteri da filtrare: " << endl;
    cin.getline(buffer, 256);
    for (int i = 0; i < strlen(buffer); i++) {
        if (buffer[i] >= 'A' && buffer[i] <= 'Z') {
            flags[(int)((buffer[i] - 'A') + 'a')] = true;
        } else if (buffer[i] >= 'a' && buffer[i] <= 'z') {
            flags[(int)((buffer[i] - 'a') + 'A')] = true;
        }

        flags[buffer[i]] = true;
    }

    char current;
    while (in.get(current) && !in.eof()) {
        if (flags[current]) {
            cout << current;
        }
    }

    in.close();
    return 0;
}