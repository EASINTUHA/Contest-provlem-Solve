#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,k,l;
    cin>>n>>m>>k>>l;
    long long int x=(l+k)/m;
    if((l+k)%m)
    {
        x++;
    }
    if(x*m>n || n<l+k )
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
    return 0;
}