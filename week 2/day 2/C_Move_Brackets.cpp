#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        stack<char> st;
        int count= 0;
        for(int i=0;i<n;i++)
        {
            char ch;
            cin>>ch;
            if(st.empty())
            {
                st.push(ch);
            }
            else if(ch == '(')
            {
                st.push(ch);
            }
            else if(st.top() == ')')
            {
                st.push(ch);
            }
            else
            {
                st.pop();
            }
        }
        count=st.size()/2;
        cout<<count<<endl;
    }
    return 0;
}
