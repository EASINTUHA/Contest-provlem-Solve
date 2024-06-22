#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int sum=0;
    if(n%2==0)
    {
        sum=n/2;
    }
    else
    {
        sum=-n/2-1;
    }
    cout<<sum<<endl;
    return 0;
}