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
        int n;
        cin>>n;
        string s,ch;
        cin>>ch;
        cin>>s;
        bool flag=false;
        int cnt=0,max1=0;
        if(ch[0]=='g')
        {
            cout<<0<<endl;
        }
        else
        {
            s=s+s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='g')
                {
                    max1=max(max1,cnt);
                    flag=false;
                }
                if(s[i]==ch[0] && flag==false)
                {
                    flag=true;
                    cnt=0;
                }
                if(flag==true)
                cnt++;
            }
            cout<<max1<<endl;
        }
    }
    return 0;
}