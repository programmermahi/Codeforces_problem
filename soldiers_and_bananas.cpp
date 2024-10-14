#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost of w bananas
    int totalCost = k * w * (w + 1) / 2;

    // Calculate how much money he needs to borrow
    int borrow = totalCost - n;

    // If borrow is negative, it means he has enough money, so borrow = 0
    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow << endl;

    return 0;
}
