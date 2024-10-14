#include <iostream>
#include <algorithm> // for reverse function
using namespace std;

int main() {
    string s, t;

    // Read the input strings
    cin >> s >> t;

    // Reverse the string s
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    // Check if the reversed string is equal to t
    if (reversed_s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
