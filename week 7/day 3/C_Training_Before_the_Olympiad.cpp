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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long int odd=0,sum=0;
        for(int i=0; i<n; ++i)
        {
            sum=sum+v[i];
            odd=odd+(v[i]&1);
            if(i==0)
            {
                cout<<sum<<" ";
            }
            else
            {
                cout<<sum-(odd/3)-(odd%3==1)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}