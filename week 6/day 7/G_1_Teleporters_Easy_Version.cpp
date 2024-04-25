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
        int c;
        cin>>c;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+v[i]>c)
            {
                break;
            }
            sum+=v[i];
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}