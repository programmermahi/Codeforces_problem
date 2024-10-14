
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;  // Initialize x to 0
    cin >> n;      // Read the number of statements

    for(int i = 0; i < n; i++) {
        string statement;
        cin >> statement;  // Read each statement

        if(statement.find("++") != string::npos) {
            x++;  // If statement contains "++", increment x
        } else {
            x--;  // If statement contains "--", decrement x
        }
    }

    cout << x << endl;  // Output the final value of x
    return 0;
}
