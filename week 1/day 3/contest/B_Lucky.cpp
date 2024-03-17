#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int first=0,last=0;
        for(int i=0;i<3;i++)
        {
            first=first+n[i]-'0';
        }
        for(int i=3;i<6;i++)
        {
            last=last+n[i]-'0';
        }
        if(first==last)
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

