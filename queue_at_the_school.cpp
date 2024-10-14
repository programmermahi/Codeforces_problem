#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string queue;
    cin >> queue;

    // Simulate for t seconds
    for (int time = 0; time < t; time++) {
        for (int i = 0; i < n - 1; i++) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                // Swap positions
                swap(queue[i], queue[i + 1]);
                // Skip the next position to avoid multiple swaps
                i++;
            }
        }
    }

    cout << queue << endl;

    return 0;
}
