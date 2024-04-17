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
        int ans=0,flip=0;
        char first=s[0];
        for(int i=1;i<n;i++)
        {
            char ch= s[i];
            if(flip==1)
            {
                if(ch=='1')
                {
                    ch='0';
                }
                else
                {
                    ch='1';
                }
            }
            if(ch==first)
            {
                ans++;
                if(flip==0)
                {
                    flip=1;
                }
                else
                {
                    flip=0;
                }
                if(ch=='1')
                {
                    first='0';
                }
                else
                {
                    first='1';
                }
            }
            else
            {
                first=ch;
            }    
		}
        cout<<ans<<endl;
    }
    return 0;
}