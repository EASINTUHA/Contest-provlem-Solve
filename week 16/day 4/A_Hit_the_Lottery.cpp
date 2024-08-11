#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n>=100)
        {
            count=n/100;
            n=n%100;
        }
        else if(n>=20)
        {
            count=count+n/20;
            n=n%20;
        }
        else if(n>=10)
        {
            count=count+n/10;
            n=n%10;
        }
        else if(n>=5)
        {
            count=count+n/5;
            n=n%5;
        }
        else
        {
            count=count+n;
            n=0;
        }
    }
    cout<<count<<endl;
    return 0;
}