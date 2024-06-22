#include<bits/stdc++.h>
using namespace std;
long long int points(long long int r)
{
    long long int y,d,p=0,l,h;
    for(long long int i=0;i<=r;i++)
    {
        d=(r+1)*(r+1)-i*i;
        l=0;
        h=r;
        while(l<=h)
        {
            long long int mid=l+(h-l)/2;
            if(mid*mid<d)
            {
                y=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        if(i==0)
        {
            p=p+(y*2+1);
        }
        else
        {
            p=p+((y*2+1)*2);
        }
    }
    return p;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x;
        cin>>n;
        x=points(n);
        m=points(n-1);
        cout<<x-m<<endl;
    }
    return 0;
}