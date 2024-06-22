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
        long long int n,sum=0,count=0;
        cin>>n;
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        unordered_map<long long int,int> mp;
        for(int i=0;i<n;i++)
        {
            sum=sum+v[i];
            mp[v[i]]++;
            if(sum%2==0)
            {
                long long int x=sum/2;
                if(mp.find(x)!=mp.end() && mp[x]>0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}