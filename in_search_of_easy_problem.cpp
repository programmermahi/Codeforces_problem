#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int isHard = 0;
    for (int i = 0; i < n; i++) {
        int opinion;
        cin >> opinion;
        if (opinion == 1) {
            isHard = 1;
        }
    }

    if (isHard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}
