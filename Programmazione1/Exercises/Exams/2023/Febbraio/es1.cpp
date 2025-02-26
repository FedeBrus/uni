#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>
using namespace std;


// è possibile definire proprie funzioni
void get_bounds(char str[], int& lb, int& ub);
void lower(char str[], int lb, int ub);
void rotate_left(char str[], int lb, int ub, int n);

int main(int argc, char * argv []) {
  
    // inserire qui il codice
    if (argc != 3) {
        cerr << "Usage: ./a.out [inputfile] [outputfile]" << endl;
        exit(1);
    }

    fstream in, out;
    in.open(argv[1], ios::in);

    if (in.fail()) {
        cerr << "Error while opening input file" << endl;
        exit(2);
    }

    out.open(argv[2], ios::out);

    if (out.fail()) {
        cerr << "Error while opening output file" << endl;
        in.close();
        exit(3);
    }

    int n;
    cout << "valore shift: ";
    cin >> n;

    char buffer[256];
    while (in >> buffer) {
        int lb, ub;
        get_bounds(buffer, lb, ub);
        lower(buffer, lb, ub);
        rotate_left(buffer, lb, ub, n);
        out << buffer << " ";
    }

    in.close();
    out.close();
    return 0;
}

void get_bounds(char str[], int& lb, int& ub) {
    lb = 0;
    ub = strlen(str);

    int i = 0;
    while ((str[i] < 'a' || str[i] > 'z') && (str[i] <= 'A' || str[i] >= 'Z')) {
        i++;
    }

    lb = i;

    bool set = false;
    while (str[i] != '\0') {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')) {
            if (!set) {
                ub = i;    
                set = true;
            }
        } else {
            ub = strlen(str);
            set = false;
        }

        i++;
    }
}

void lower(char str[], int lb, int ub) {
    for (int i = lb; i < ub; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

void rotate_left(char str[], int lb, int ub, int n) {
    n = n % (ub - lb);
    char* tmp = new char[n];
    for (int i = 0; i < n; i++) {
        tmp[i] = str[lb + i];
    }

    for (int i = lb + n; i < ub; i++) {
        str[i - n] = str[i];
    }

    for (int i = 0; i < n; i++) {
        str[ub - n + i] = tmp[i];
    }

    delete [] tmp;
}