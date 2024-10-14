
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 != 0) {
            n--;  // Decrease by 1 if the last digit is non-zero
        } else {
            n /= 10;  // Divide by 10 if the last digit is zero
        }
    }

    cout << n << endl;  // Output the result after k operations
    return 0;
}
