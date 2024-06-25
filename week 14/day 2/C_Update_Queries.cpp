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
        int p,q;
        cin>>p>>q;
        string s,s1;
        cin>>s;
        vector<int> v(q);
        for(int i=0;i<q;i++)
        {
            cin>>v[i];
        }
        cin>>s1;
        set<int> st(v.begin(),v.end());
        vector<int> v1(st.begin(),st.end());
        sort(s1.begin(),s1.end());
        unordered_map<int, char> z;
        for(int i=0;i<v1.size();i++)
        {
            z[v1[i]]=s1[i];
        }
        for(const auto &i : z)
        {
            s[i.first-1]=i.second;
        }
        cout<<s<<endl;
    }
    return 0;
}