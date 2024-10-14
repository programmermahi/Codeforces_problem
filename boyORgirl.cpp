#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string username;
    cin >> username; // Read the username

    set<char> distinct_characters; // Set to store distinct characters

    // Add each character of the username to the set
    for (char c : username) {
        distinct_characters.insert(c);
    }

    // Check if the number of distinct characters is odd or even
    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
