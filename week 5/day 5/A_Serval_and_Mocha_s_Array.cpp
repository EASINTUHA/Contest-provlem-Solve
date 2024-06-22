#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag=true;
        for(int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                if(gcd(v[i],v[j])<=2 && flag)
                {
                    cout<<"Yes"<<endl;
                    flag=false;
                    continue;
                }
            }
        }
        if(flag)
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}