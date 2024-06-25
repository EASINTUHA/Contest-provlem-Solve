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
        int n,count=0;
        string s;
        cin>>n>>s;
        int x=0;
        for(int i=0;i<n;i++)
        {
            count=1;
            for(int j=i+1; j<n; ++j)
            {
                if(s[j]==s[i])
                    count++;
                else
                {
                    x=max(x,count);
                    count=1;
                    break;
                }
            }
            x=max(x,count);
        }
        int p=x;
        x=0;
        for(int i=0;i<n;i++)
        {
            int count=1;
            for(int j=i+1; j<n; ++j)
            {
                if(s[j]==s[i])
                    count++;
                else
                {
                    x=max(x,count);
                    count=1;
                    break;
                }
            }
            x=max(x,count);
        }
        cout<<max(p,x)+1<<endl;
    }
    return 0;
}