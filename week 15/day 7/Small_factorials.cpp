#include<bits/stdc++.h>
using namespace std;
int multiply(int x, vector<int>& result, int result_size) {
    int carry = 0; 
    for (int i = 0; i < result_size; i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;  
        carry = prod / 10; 
    }
    while (carry) {
        result.push_back(carry % 10);
        carry = carry / 10;
        result_size++;
    }

    return result_size;
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1); 
    int result_size = 1;

    for (int x = 2; x <= n; x++) {
        result_size = multiply(x, result, result_size);
    }
    for (int i = result_size - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}
