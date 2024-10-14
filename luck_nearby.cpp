
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n; // To store the input number as a string
    cin >> n;

    int luckyCount = 0; // To count lucky digits

    // Count the lucky digits in n
    for (char c : n) {
        if (c == '4' || c == '7') {
            luckyCount++;
        }
    }

    // Check if the count of lucky digits is a lucky number
    string countStr = to_string(luckyCount);
    bool isNearlyLucky = true;

    for (char c : countStr) {
        if (c != '4' && c != '7') {
            isNearlyLucky = false; // Found a non-lucky digit
            break;
        }
    }

    // Output result
    if (isNearlyLucky) {
        cout << "YES" << endl; // It's a nearly lucky number
    } else {
        cout << "NO" << endl; // It's not a nearly lucky number
    }

    return 0;
}
