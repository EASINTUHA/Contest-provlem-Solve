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
        vector<int>v(n),v1(n,-1);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
            {
                v1[i]=v1[i-1];
            }
            else
            {
                v1[i]=i-1;
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--,r--;
            if(v1[r]<l)
            {
                cout<<-1<<" "<<-1<<endl;
            }
            else
            {
                cout<<v1[r]+1<<" "<<r+1<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}