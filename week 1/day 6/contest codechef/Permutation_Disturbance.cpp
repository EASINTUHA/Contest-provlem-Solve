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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]==i)
            {
                swap(v[i],v[i+1]);
                count++;
            }
        }
        if(v[n]==n)
        count++;
        cout<<count<<endl;
    }
    return 0;
}
