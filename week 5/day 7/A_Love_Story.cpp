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
        int count=0;
        string s,c="codeforces";
        cin>>s;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=c[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}