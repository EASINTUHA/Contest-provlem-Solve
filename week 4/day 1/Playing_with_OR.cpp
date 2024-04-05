#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(v[i]&1)
                count++;
        }
        int x=0;
        if(count>0)
            x++;
        for(int i=m;i<n;i++)
        {
            if(v[i-m] & 1)
                count--;
            if(v[i] & 1)
                count++;
            if(count>0)
                x++;
        }
        cout<<x<<endl;
    }
    return 0;
}
