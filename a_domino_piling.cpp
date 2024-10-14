#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    // The maximum number of dominoes is floor(M * N / 2)
    cout << (M * N) / 2 << endl;

    return 0;
}

