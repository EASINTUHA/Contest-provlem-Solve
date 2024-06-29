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
        set<char>st;
        int possible = 1;
        for(int i=0; i<n; ++i)
        {
            int p,q;
            cin>>p>>q;
            if(p>0)
                st.insert('r');
            else if(p<0)
                st.insert('l');
            if(q>0)
                st.insert('u');
            else if(q<0)
            st.insert('d');
            if(st.size()==4)
                possible = 0;       
        }
        if(possible)
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