#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N;
    in >> N;

    int arr[N];
    int maxHere[N] = {0};
    int maxSoFar[N] = {0};

    for (int i = 0; i < N; i++) {
        in >> arr[i];
    }

    maxHere[0] = max(arr[0], 0);
    maxSoFar[0] = maxHere[0];

    for (int i = 1; i < N; i++) {
        maxHere[i] = max(maxHere[i - 1] + arr[i], 0);
        maxSoFar[i] = max(maxHere[i], maxSoFar[i - 1]);
    }

    out << maxSoFar[N - 1];
    return 0;
}
