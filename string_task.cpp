
#include <iostream>
#include <string>
#include <cctype> // For tolower()

using namespace std;

int main() {
    string s;
    cin >> s; // Input the string

    string result = ""; // To store the final result

    // Iterate over each character in the input string
    for (int i = 0; i < s.length(); i++) {
        // Convert the current character to lowercase
        char ch = tolower(s[i]);

        // If the character is not a vowel, add a period and the consonant
        if (ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i') {
            result += '.';
            result += ch;
        }
    }

    // Output the resulting string
    cout << result << endl;

    return 0;
}
