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
        int n,count=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        while(v.back()==0)
        {
            v.pop_back();
        }
        bool flag=false;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0 && flag)
            {
                count++;
            }
            if(v[i]==1)
            {
                flag=true;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}