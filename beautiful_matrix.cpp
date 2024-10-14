
#include <iostream>
#include <cmath>  // For abs function
using namespace std;

int main() {
    int matrix[5][5];
    int x, y;  // To store the position of '1'

    // Reading the 5x5 matrix and finding the position of '1'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i + 1;  // Row of '1'
                y = j + 1;  // Column of '1'
            }
        }
    }

    // Calculate the number of moves to get '1' to the center (3, 3)
    int moves = abs(x - 3) + abs(y - 3);

    // Output the result
    cout << moves << endl;

    return 0;
}
