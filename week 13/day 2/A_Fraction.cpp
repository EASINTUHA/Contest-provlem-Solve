#include<bits/stdc++.h>
using namespace std;
long long gcd(int a,int b)
{
    if (b==0) 
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=n/2;i>0;i--)
    {
        if(gcd(i,n-i)==1)
        {    
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
    return 0;
}