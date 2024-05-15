#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum=45;
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y;
        cin>>n;
        y=n%9;
        x=n/9;
        long long ans=(y* (y+ 1))/2+sum*x;
        cout<<ans<<endl;
    }
    return 0;
}

