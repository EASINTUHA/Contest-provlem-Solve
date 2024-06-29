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
        long long int n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<long long int>v(n);
        for(auto &i:v)  cin>>i;
        v.insert(v.begin(),0);
        bool flag=true;
        for(int i=1; i<=n; ++i)
        {
            long long int x=(v[i]-v[i-1])*a;
            f=f-min(x,b);
            if(f<=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}