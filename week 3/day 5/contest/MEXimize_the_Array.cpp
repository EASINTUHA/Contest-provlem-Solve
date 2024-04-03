#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x=0;
            if(v[i]>i)
            x=v[i]-i;
            else
            x=i-v[i];
            count=count+x;
        }
        cout<<count<<endl;
    }
    return 0;
}