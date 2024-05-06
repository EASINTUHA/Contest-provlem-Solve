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
        sort(v.begin(),v.end(),greater<>());
        vector<int> v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end(),greater<>());
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(v[i]>v1[i] || v1[i]-v[i]>1)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}