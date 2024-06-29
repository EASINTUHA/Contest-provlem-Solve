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
        string s;
        map<char,int>m;
        char c='a';
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                s.push_back(c);
                m[c]++;
                c++;
            }
            else
            {
                for(auto it:m)
                {
                    if(it.second==x)
                    {
                        s.push_back(it.first);
                        m[it.first]++;
                        break;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}