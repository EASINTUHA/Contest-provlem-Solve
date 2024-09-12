//codechef
// Update the code below to solve the problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        //Accept 1 integer inputs.
        cin >> X;
        if(X>100)
        {
            X=X-10;
        }
        cout<<X<<endl;
    }
    return 0;
}