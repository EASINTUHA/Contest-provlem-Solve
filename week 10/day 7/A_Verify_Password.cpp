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
        bool flag = false,x=false,y=false;
        char a='0',b='a';
        for(int i=0;i<n;i++)
        {
            if (isdigit(s[i]))
            {
                if (s[i]<a || y)
                {
                    flag=true;
                    break;
                }
                a=s[i];
                x=true;
            }
            else
            {
                if(s[i]<b)
                {
                    flag=true;
                    break;
                }
                b=s[i];
                y=true;
            }
        }
        if(!flag)
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
