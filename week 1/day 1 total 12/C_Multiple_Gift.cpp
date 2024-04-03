#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    int cnt=0;
    if(a<=b)
    {
        cnt++;
        long long int c=a*2;
        while(c<=b)
        {
            c=c*2;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
