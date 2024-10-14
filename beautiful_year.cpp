#include <iostream>
#include <set>
using namespace std;

// Function to check if a year has all distinct digits
bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size(); // Check if all digits are unique
}

int main() {
    int y;
    cin >> y;

    // Loop to find the next year with distinct digits
    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
