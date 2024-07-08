#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        long long int a,b;
        l--;
        if(l%2 == 0)
        {
            a=l/2*l/2;
        }
        else
        {
            a=(l/2+1)*(l/2+1);
        }
        long long int c=l/2*(l/2+1);
        if(r%2==0)
        {
            b=r/2*r/2;
        }
        else
        {
            b=(r/2+1)*(r/2+1);
        }
        long long int d=r/2*(r/2+1);
        long long int e=d-c;
        long long int odd_s=b-a;
        cout<<(e-odd_s)<<endl;
    }
    return 0;
}