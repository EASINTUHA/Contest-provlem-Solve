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
        int n,sum=0,count=2;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            int x=0,y=i+1;
            for (int j=y;j<=n;j=j+y)
            {
                x=x+j;
            }
            if(x>sum)
            {
                sum=x;
                count=y;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}