#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a=0,b=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4')
        {
             a++;
        }
        else if(s[i]=='7')
        {
            b++;
        }
    }
    if(a==0 && b==0)
    {
        cout<<"-1"<<endl;
    }
    else if(a>b)
    {
        cout<<"4"<<endl;
    }
    else if(b>a)
    {
        cout<<"7"<<endl;
    }
    else if(b==a)
    {
        cout<<"4"<<endl;
    }
    return 0;
}