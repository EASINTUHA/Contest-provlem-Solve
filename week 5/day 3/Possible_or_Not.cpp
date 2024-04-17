//https://www.codechef.com/problems/CS2023_PON
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int temp=-1;
        int i=0;
        while(i<a)
        {
            int x;
            cin>>x;
            if((x & b)==b)
            temp=temp&x;
            i++;
        }
        if(temp==b)
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