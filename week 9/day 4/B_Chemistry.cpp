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
        int n,k;
        string s;
        cin>>n>>k>>s;
        map<char,int> m;
        for(char c: s)
            m[c]++;
        int odd=0;
        for(auto it:m)
        {
            if(it.second%2)
            {
                odd++;
            }
        }
        if(n-k==0 || odd>k+1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}