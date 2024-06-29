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
        vector<int> v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        long long int row=0,col=0;
        for(int i=0;i<n;i++)
        {
            row+=v[i]+v1[0];
        }
        for(int i=0;i<n;i++)
        {
            col=col+v1[i]+v[0];
        }
        cout<<min(row,col)<<endl;
    }
    return 0;
}