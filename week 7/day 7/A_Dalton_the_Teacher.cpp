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
        int n,count=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
           if(v[i]-1==i)
           {
                count++;
           }
        }
        if(count==0)
        {
            cout<<0<<endl;
        }
        else if(count%2==0)
        {
            cout<<count/2<<endl;
        }
        else
        {
            cout<<count/2+1<<endl;
        }
    }
    return 0;
}