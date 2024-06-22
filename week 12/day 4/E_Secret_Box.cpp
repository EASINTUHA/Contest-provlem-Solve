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
        long long int w,x,y,z,count=0;
        cin>>w>>x>>y>>z;
        for (int i=0;i<w;i++)
        {
            for (int j=0;j<x;j++)
            {
                int p=i+1,q=j+1;
                if(z%(p*q)==0 && (z/(p*q))<=y)
                {
                    count=max(count,(w-p+1)*(x-q+1)*(y-(z/(p*q))+1));
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}