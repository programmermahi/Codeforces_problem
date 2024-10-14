
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string hello = "hello";
    int j = 0; // Pointer for the word "hello"

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == hello[j]) {
            j++;
        }
        if (j == 5) { // We found all characters of "hello"
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
