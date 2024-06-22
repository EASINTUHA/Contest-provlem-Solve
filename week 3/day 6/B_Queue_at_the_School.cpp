#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    while(m--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                char c;
                c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}