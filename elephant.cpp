#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x; // Input the position of the friend's house

    // Calculate the minimum number of steps
    int steps = x / 5;  // Maximum full 5-unit steps
    if (x % 5 != 0) {
        steps++; // Add 1 more step if there's a remainder
    }

    // Output the result
    cout << steps << endl;

    return 0;
}
