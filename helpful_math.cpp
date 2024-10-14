#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;  // Input the sum string

    vector<int> numbers;  // To store the extracted numbers

    // Extract numbers from the string
    stringstream ss(s);
    string token;
    while (getline(ss, token, '+')) {
        numbers.push_back(stoi(token));  // Convert to integer and store
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Reconstruct the output string
    string result;
    for (size_t i = 0; i < numbers.size(); i++) {
        result += to_string(numbers[i]);  // Append number
        if (i != numbers.size() - 1) {
            result += '+';  // Append '+' except for the last number
        }
    }

    // Output the result
    cout << result << endl;

    return 0;
}
