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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int x=0;
        for(int i=0, j=n-1; i<j; ++i, --j)
        {
            x=x+v[j]-v[i];
        }
        cout<<x<<endl;
    }
    return 0;
}