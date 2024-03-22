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
        int T=0, ii=0, m=0, u=0, r=0, other=0;
        if(n != 5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]=='T')
                {
                    T++;
                }
                else if(s[j]=='i')
                {
                    ii++;
                }
                else if(s[j]=='m')
                {
                    m++;
                }
                else if(s[j]=='u')
                {
                    u++;
                }
                else if(s[j]=='r')
                {
                    r++;
                }
                else
                {
                    other++;
                }
            }
            if(T==1 && ii==1 && m==1 && u==1 && r==1 && other==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
