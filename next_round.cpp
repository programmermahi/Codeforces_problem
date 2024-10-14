#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;  // Read n and k
    vector<int> scores(n);

    // Read the scores
    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int threshold_score = scores[k-1];  // The score of the k-th participant
    int count = 0;

    // Count how many participants advance
    for(int i = 0; i < n; i++) {
        if(scores[i] >= threshold_score && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;  // Output the number of advancing participants

    return 0;
}

