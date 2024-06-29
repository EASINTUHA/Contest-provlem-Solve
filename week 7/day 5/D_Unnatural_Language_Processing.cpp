#include<bits/stdc++.h>
using namespace std;
bool is_v(char ch)
{
    return ch=='a' || ch=='e'; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s,ans;
        cin>>n>>s;
        for(int i=n-1; i>=0; --i)
        {
            if(is_v(s[i]) && !is_v(s[i-1]))
            {
                ans.push_back(s[i]);
                ans.push_back(s[i-1]);
                ans.push_back('.');
                --i;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}