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
        vector<string>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        vector<char>v;
        int ans=0;
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                v.clear();

                v.push_back(s[i][j]);
                v.push_back(s[j][n-i-1]);
                v.push_back(s[n-j-1][i]);
                v.push_back(s[n-i-1][n-j-1]);
                sort(v.begin(),v.end());
                for(auto c:v)
                {
                    ans+=v.back()-c;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}