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
        set<string>st;
        for(int i=0; i<n-1; ++i)
        {
            string str=s.substr(i,2);
            st.insert(str);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}