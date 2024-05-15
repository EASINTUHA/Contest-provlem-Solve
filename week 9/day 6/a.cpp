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
        for(int i=0;i<b;i++)
        {
            if(a<=1000)
            {
                a=a+1000;
            }
            else
            {
                a=a*2;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}