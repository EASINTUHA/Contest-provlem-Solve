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
        int n;
        cin>>n;
        int count=0,count1=0;
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                count++;
            }
            else if(v[i]==1)
            {
                count1++;
            }
        }
        if(count1==0)
        {
            cout<<0<<endl;
        }
        else if(count==0)
        {
            cout<<count1<<endl;
        }
        else
        {
            long long ans=count1*pow(2,count);
            cout<<ans<<endl;
        }
    }
    return 0;
}