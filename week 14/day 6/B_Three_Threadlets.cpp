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
        multiset<int>st;
        for(int i=0;i<3;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        for(int i=0; i<3 && *st.begin()!=*st.rbegin(); ++i)
        {
            st.insert(*st.begin());
            st.insert(*--st.end()-*st.begin());
            st.erase(--st.end());
        }
        if(*st.begin()==*st.rbegin())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}