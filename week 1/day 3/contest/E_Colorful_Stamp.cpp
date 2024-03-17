#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='W')
            {
                int b=0,r=0;
                while(i<n && s[i]!='W')
                {
                    if(s[i]=='R')
                    {
                        r++;
                        i++;
                    }
                    else
                    {
                        b++;
                        i++;
                    }
                }
                if(b==0 || r==0)
                {
                    flag=false;
                }
            }
        }
        if(flag==true)
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