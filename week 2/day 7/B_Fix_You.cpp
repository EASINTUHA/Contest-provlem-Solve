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
        int n,m;
        cin>>n>>m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(i+1<n)
            {
                if(s[m-1]=='R')
                {
                    count++;
                }
            }
            else
            {
                for(int j=0; j<m-1; ++j)
                {
                    if(s[j]=='D')
                    {
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}