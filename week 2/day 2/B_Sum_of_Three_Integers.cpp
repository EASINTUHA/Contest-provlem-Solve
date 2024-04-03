#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    for (int i=0;i<=a;i++)
    {
        for (int j=0;j<=a;j++)
        {
            int sum=b-i-j;
            if(sum>=0 && sum<=a)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
