#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        for(int i=0;i<5;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            count++;
        }
        if(count>3)
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