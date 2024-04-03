#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool flag = true;
        int idx = 0;
        
        // Check if the string starts with 'm' or 'M'
        if (tolower(s[idx++]) != 'm') {
            flag = false;
        }
        else {
            // Check if there is at least one 'e' character present after 'm'
            while (idx < n && (s[idx] == 'e' || s[idx] == 'E')) {
                idx++;
            }
            if (idx == 1 || tolower(s[idx - 1]) != 'e') { 
                flag = false;
            }
            else {
                // Check if there is at least one 'o' character present after 'e'
                while (idx < n && (s[idx] == 'o' || s[idx] == 'O')) {
                    idx++;
                }
                if (idx <= 2 || tolower(s[idx - 1]) != 'o') { 
                    flag = false;
                }
                else {
                    // Check if there is at least one 'w' character present after 'o'
                    while (idx < n && (s[idx] == 'w' || s[idx] == 'W')) {
                        idx++;
                    }
                    if (idx != n) { 
                        flag = false;
                    }
                }
            }
        }
        
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
