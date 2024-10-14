#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;

    for(int i = 0; i < s.size(); i++) {
        int c = 0;

        if(s[i] == '0') {
            while(i < s.size() && s[i] == '0') {
                c++;
                i++;
            }
        } else {
            while(i < s.size() && s[i] == '1') {
                c++;
                i++;
            }
        }

        if(c >= 7) {
            ans = 1;
        }

        // We don't need to decrement i here because the for loop will increment it correctly.
    }

    if(ans == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
