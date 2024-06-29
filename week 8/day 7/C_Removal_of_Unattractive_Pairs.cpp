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
        string s;
        cin>>n>>s;
        map<char,int> mp;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mx=max(mx,mp[s[i]]);
        }
        if(mx>n/2)
        {
            cout<<2*mx-n<<endl;
        }
        else
        {
            cout<<n%2<<endl;
        }
    }
    return 0;
}