#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // Input Limak's and Bob's initial weights

    int years = 0; // Initialize the number of years

    // Loop until Limak's weight becomes strictly larger than Bob's
    while (a <= b) {
        a *= 3; // Limak's weight triples
        b *= 2; // Bob's weight doubles
        years++; // Increment the year counter
    }

    // Output the number of years it took
    cout << years << endl;

    return 0;
}
