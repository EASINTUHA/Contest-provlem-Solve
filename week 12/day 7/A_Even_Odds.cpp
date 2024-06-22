#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;
    if(k<=n/2)
    {
        cout<<2*k-1<<endl;
    }
    else
    {
        if(n&1)
        {
            if(k==n/2+1)
                cout<<n<<endl;
            else
                cout<<2*(k-n/2-1)<<endl;
        }
        else
        {
            cout<<2*(k-n/2)<<endl;
        }
    }  
    return 0;
}