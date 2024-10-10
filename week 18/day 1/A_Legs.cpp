#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,chicken=0,cow=0;
        cin>>n;
        if(n>3)
        {
            cow=n/4;
            n=n%4;
        }
        chicken=n/2;
        cout<<chicken+cow<<endl;
    }
    return 0;
}