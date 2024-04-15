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
        int a=0,b=1;
        int bit=0;
        while(b*2<=n)
        {
            b=2*b;
            bit++;
        }
        for(int i=bit-1;i>=0;i--) 
        {
            if (n&1<<i)
            {
                a=a | (1<<i);
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}