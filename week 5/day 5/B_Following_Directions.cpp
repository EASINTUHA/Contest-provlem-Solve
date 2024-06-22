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
        int n,a=0,b=0;
        cin>>n;
        string s;
        cin>>s;
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U')
            {
                b++;
            }
            else if(s[i]=='D')
            {
                b--;
            }
            else if(s[i]=='R')
            {
                a++;
            }
            else if(s[i]=='L')
            {
                a--;
            }
            if(a==1 && b==1) 
            {
                break;
            }
        }
        if(a==1 && b==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}