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
        int n,m,x,count=0;
        cin>>n>>m;
        x=n*10;
        while(true)
        {
            count++;
            int p=x+100*count;
            double q=p/(10.0+count);
            if(q>=m)
            {
                cout<<count<<endl;
                break;
            }
        }
    }
    return 0;
}