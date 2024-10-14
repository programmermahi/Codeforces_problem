#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current_passengers = 0, max_capacity = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current_passengers -= a;  // Passengers exit
        current_passengers += b;  // Passengers enter

        if (current_passengers > max_capacity) {
            max_capacity = current_passengers;
        }
    }

    cout << max_capacity << endl;

    return 0;
}

