#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int p,q;
            cin>>p>>q;
            if(q==b)
            {
                v.push_back(p);
            }
        }
        sort(v.begin(),v.end(),greater<>());
        long long int sum=0;
        if(v.size()<a)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<a;i++)
            {
                sum=sum+v[i];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}