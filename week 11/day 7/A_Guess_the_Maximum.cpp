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
        int n,c=0,mx=INT_MIN,count=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>mx)
            {
                mx=v[i];
            }
        }
        while(c<=mx)
        {
            bool flag=false;
            int y,x=(c+mx)/2;
            for(int j=1;j<n;j++)
            {
                if(v[j-1]>v[j])
                {
                    y=v[j-1];
                }
                else
                {
                    y=v[j];
                }
                if(y<=x)
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                mx=--x;
            }
            else
            {
                count=x;
                c=++x;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}