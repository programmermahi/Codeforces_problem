#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones required for the length (n) and width (m)
    long long flagstones_n = (n + a - 1) / a;  // Equivalent to ceil(n / a)
    long long flagstones_m = (m + a - 1) / a;  // Equivalent to ceil(m / a)

    // The total number of flagstones is the product of flagstones_n and flagstones_m
    cout << flagstones_n * flagstones_m << endl;

    return 0;
}
