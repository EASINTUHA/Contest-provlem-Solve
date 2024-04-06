#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x=(v[i]^x);
        }
        if (x==0)
            cout<<0<<endl;
        else if(n&1)
            cout<<x<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
