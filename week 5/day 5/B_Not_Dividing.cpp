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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v[0]==1)
        {
            v[0]++;
        }
        for(int i=1; i<n; ++i)
        {
            if(v[i]==1)
            {
                v[i]++;
            }
            if(v[i]%v[i-1]==0)
            {
                v[i]++;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}