#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n; // Number of stones
    cin >> s; // The sequence of stones

    int count = 0; // To count the number of stones to remove

    // Loop through the string and check for consecutive same colored stones
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }

    // Output the result
    cout << count << endl;

    return 0;
}
