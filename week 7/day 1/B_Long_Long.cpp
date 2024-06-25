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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long int sum=0,count=0;
        bool flag=true;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                continue;
            }
            else if(v[i]<0 && flag)
            {
                count++;
                flag=false;
            }
            else if(v[i]>0)
            {
                flag=true;
            }
            sum=sum+abs(v[i]);
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;
}