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
        int n,ans=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+')
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
        cout<<abs(ans)<<endl;
    }
    return 0;
}