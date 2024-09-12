//codechef
// Update the blanks in the code below
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        // Accept 1 integer as input.
        cin>> N;
        //1st condition in the problem
        if (N <= 100)
        {
            cout << "Good" << endl;
        }
        //2nd condition in the problem
        else if (N >100 && N <=200)
        {
            cout << "Better" << endl;
        }
        //3rd condition in the problem
        else
        {
            cout << "Best" << endl;
        }
    }
    return 0;
}