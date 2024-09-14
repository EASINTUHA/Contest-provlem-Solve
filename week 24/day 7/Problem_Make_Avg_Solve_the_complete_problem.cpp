//codechef
// Update the program below to solve the problem
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> C;
        if((A+C)%2==0)
        {
            B=A+C;
            B=B/2;
            cout<<B<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}