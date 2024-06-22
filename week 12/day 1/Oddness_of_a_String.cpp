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
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            vector<int> v(26,0);
            for(int i=a;i<=b;i++)
            {
                int c=s[i]-'a';
                v[c]++;
            }
            int count=0;
            for(int i=0;i<26;i++)
            {
                if(v[i]%2==1)
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}