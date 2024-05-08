#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        bool flag=true;
        vector<int> v(n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(), greater<int>());
        if(n%2==0)
        {
            x=n/2;
        }
        else
        {
            x=n/2+1;
        }
        for(int i=0;i<x;i++)
        {
            sum=sum+v[i];
        }
        for(int i=x;i<n;i++)
        {
            sum=sum-v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}