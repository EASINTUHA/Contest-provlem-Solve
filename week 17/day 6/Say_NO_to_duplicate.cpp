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
        int x=v[0];
        cout<<x<<" ";
        for(int i=1;i<n;i++)
        {
            if(v[i]!=x)
            {
                cout<<v[i]<<" ";
                x=v[i];
            }
        }
        cout<<endl;
    }
    return 0;
}