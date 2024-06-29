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
        vector<int>v;
        for(int i=0; i<s.size(); ++i)
        {
            while(!v.empty() && s[v.back()]<s[i])
                v.pop_back();
            v.push_back(i);
        }
        int ct=count(s.begin(),s.end(),s[v[0]]);
        for(int i=0; i<(v.size())/2; ++i)
        {
            swap(s[v[i]],s[v[v.size()-i-1]]);
        }
        int sorted=1;
        for(int i=1;i<s.size();++i)
        {
            if(s[i]<s[i-1])
            {
                sorted=0;
                break;
            }
        }
        if(sorted)
            cout<<v.size()-ct<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}