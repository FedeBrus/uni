#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Inserire le coordinate del punto P: ";
    cin >> x >> y;

    double a, b, c, d;

    cout << "Inserire le coordinate del primo vertice del rettangolo: ";
    cin >> a >> b;

    cout << "Inserire le coordinate del secondo vertice del rettangolo: ";
    cin >> c >> d;

    double minx, maxx, miny, maxy;

    if (a <= c) {
        minx = a;
        maxx = c;
    } else {
        minx = c;
        maxx = a;
    }

    if (b <= d) {
        miny = b;
        maxy = d;
    } else {
        miny = d;
        maxy = b;
    }

    if (x >= minx && x <= maxx && y >= miny && y <= maxy)  {
        cout << "Il punto e' all'interno del rettangolo" << endl;
    } else {
        cout << "Il punto non e' all'interno del rettangolo" << endl;
    }

    return 0;
}