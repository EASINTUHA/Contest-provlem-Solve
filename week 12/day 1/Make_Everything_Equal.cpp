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
        int n,m;
        cin >> n >>m;
        vector<int> v(n);
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            freq[v[i]]++;
        }
        int f=0;
        for(auto p:freq)
        {
            if(p.second>f)
            {
                f=p.second;
            }
        }
        int x=n-f;
        if(x<=m)
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