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
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<>());
        for(int i=0;i<5;i++)
        {
            v[2]++;
            sort(v.begin(),v.end(),greater<>());
        }
        long long int ans=v[0]*v[1]*v[2];
        cout<<ans<<endl;
    }
    return 0;
}