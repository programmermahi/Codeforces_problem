#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of rooms

    int count = 0; // To count suitable rooms

    for (int i = 0; i < n; i++) {
        int pi, qi;
        cin >> pi >> qi; // Read current occupancy and capacity

        // Check if the room can accommodate both George and Alex
        if (qi - pi >= 2) {
            count++; // Increment count if there is space for both
        }
    }

    cout << count << endl; // Output the result
    return 0;
}
