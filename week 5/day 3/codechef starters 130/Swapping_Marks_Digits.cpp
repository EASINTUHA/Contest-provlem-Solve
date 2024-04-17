#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    return (n%10)*10+(n/10);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int nr=reverse(n);
        int mr=reverse(m);
        if(nr>m || nr>mr || n>mr || n>m)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}