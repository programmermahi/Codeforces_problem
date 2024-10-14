#include <iostream>
using namespace std;

int main() {
    int n; // Number of force vectors
    cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0; // Initialize sums for x, y, z components

    for (int i = 0; i < n; ++i) {
        int x, y, z; // Components of the force vector
        cin >> x >> y >> z;
        sum_x += x; // Add to sum_x
        sum_y += y; // Add to sum_y
        sum_z += z; // Add to sum_z
    }

    // Check if all sums are zero
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" << endl; // The body is in equilibrium
    } else {
        cout << "NO" << endl; // The body is not in equilibrium
    }

    return 0;
}
