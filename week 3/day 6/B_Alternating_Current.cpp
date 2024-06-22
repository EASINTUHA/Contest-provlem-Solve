#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(s[i]!=st.top())
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }
    if(st.empty())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}