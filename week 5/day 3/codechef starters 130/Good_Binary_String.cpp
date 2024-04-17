#include <iostream>
#include <vector>

using namespace std;

string makeGoodString(vector<int>& S, int N) {
    // Check if the string is already alternating
    bool alternating = true;
    for (int i = 1; i < N; ++i) {
        if (S[i] == S[i - 1]) {
            alternating = false;
            break;
        }
    }
    
    // If the string is already alternating, it's already good
    if (alternating) {
        return "-1";
    }
    
    // Otherwise, find the indices of the alternating subsequence
    vector<int> indices;
    for (int i = 1; i < N; ++i) {
        if (S[i] == S[i - 1]) {
            indices.push_back(i);
        }
    }
    
    // Return the length of the chosen subsequence and the indices
    return to_string(indices.size()) + "\n" + to_string(indices.front()) + " " + to_string(indices.back() + 1);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> S(N);
        for (int i = 0; i < N; ++i) {
            char c;
            cin >> c;
            S[i] = c - '0';
        }
        cout << makeGoodString(S, N) << endl;
    }

    return 0;
}
