#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool flag=true;
    int n=s.size();
    for(int i=1;i<n;i++)
    {
        if (islower(s[i]))
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<n;i++)
        {
            if(islower(s[i])) 
            {
                s[i]=toupper(s[i]);
            }
            else
            {
                s[i]=tolower(s[i]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}