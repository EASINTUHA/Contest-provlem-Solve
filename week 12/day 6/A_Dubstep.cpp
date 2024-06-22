#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    bool flag=false;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            if (flag)
            {
                flag=0;
                cout<<" ";
            }
        }
        else
        {
            flag=true;
            cout<<s[i];
        }
    }
    return 0;
}