#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }
        sort(v.begin(),v.end());
        int x=k;
        for(int i=0;i<n;i++)
        {
            int total=7-v[i];
            if(x>0 && v[i]<total)
            {
                sum=sum+7-2*v[i];
                x--;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
