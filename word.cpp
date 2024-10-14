
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;

    // Count the number of uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }

    // Compare counts and transform the word
    if (upperCount > lowerCount) {
        for (char &c : s) {
            c = toupper(c);  // Convert to uppercase
        }
    } else {
        for (char &c : s) {
            c = tolower(c);  // Convert to lowercase
        }
    }

    // Output the transformed word
    cout << s << endl;

    return 0;
}
