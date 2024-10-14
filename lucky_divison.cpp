#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Lucky numbers up to 1000
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474,477, 744, 747,774,777};
    bool isAlmostLucky = false;

    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            isAlmostLucky = true; // Found a lucky number that divides n
            break;
        }
    }

    if (isAlmostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

