#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=a-i;j++)
        {
            for(int k=0;k<=a-i-j;k++)
            {
                if(i*j*k<=b)
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}