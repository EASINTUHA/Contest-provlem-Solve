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
        int n,m;
        cin>>n>>m;
        long long int x=n+m;
        if(x%2==0)
        {
            cout<<"Tonya"<<endl;
        }
        else
        {
            cout<<"Burenka"<<endl;
        }
    }
    return 0;
}