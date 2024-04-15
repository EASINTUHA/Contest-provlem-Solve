#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    vector<int> dp(n, 0);
    stack<int> st;
    int length=0,count= 0;
    for (int i=0;i<n;i++)
    {
        char c=s[i];
        if(c== '(')
        {
            st.push(i);
            continue;
        }
        if(st.empty())
        {
            continue;
        }
        int j=st.top();
        st.pop();
        if (j>=1)
        {
            dp[i]=i-j+1+dp[j - 1];
        }
        else
        {
            dp[i]=i-j+1;
        }
        if (dp[i]>length)
        {
            length=dp[i];
            count=1;
        }
        else if(dp[i]==length)
        {
            count++;
        }
    }
    if(length==0)
    {
        cout<<0<<" "<<1;
    }
    else
    {
        cout<<length<<" "<<count;
    }
    return 0;
}