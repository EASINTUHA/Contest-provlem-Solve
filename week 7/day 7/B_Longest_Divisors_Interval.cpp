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
        long long int n,x=1;
        cin>>n;
        bool flag=true;
        while(x<=100 && flag)
        {
            if(n%x)
            {
                flag=false;
            }
            x++;
        }
        if(!flag)
        {
            cout<<x-2<<endl;
        }
    }
    return 0;
}