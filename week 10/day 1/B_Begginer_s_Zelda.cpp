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
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n-1; ++i)
        {
            int x,y;
            cin>>x>>y;
            mp[x]++;
            mp[y]++;
        }
        int count=0;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                count++;
            }
        }
        if(count%2==1)
        {
            count++;
        }
        cout<<count/2<<endl;
    }
    return 0;
}