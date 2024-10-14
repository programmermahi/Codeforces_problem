#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int total_width = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h) {
            total_width += 2;  // Person bends down
        } else {
            total_width += 1;  // Person walks normally
        }
    }

    cout << total_width << endl;

    return 0;
}

