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
        vector<int>v(n),v2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        v2=v;
        sort(v2.begin(),v2.end());
        bool flag=true;
        for(int i=0; i<n; ++i)
        {
            if((v[i]%2==0 && v2[i]%2!=0) || (v[i]%2!=0 && v2[i]%2==0))
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