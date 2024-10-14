
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;

    // Read the input
    cin >> n;   // number of games
    cin >> s;   // string representing the outcomes

    // Variables to count wins for Anton and Danik
    int anton_wins = 0, danik_wins = 0;

    // Loop through the string and count wins
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            anton_wins++;
        } else if (s[i] == 'D') {
            danik_wins++;
        }
    }

    // Determine who won more games
    if (anton_wins > danik_wins) {
        cout << "Anton" << endl;
    } else if (danik_wins > anton_wins) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
