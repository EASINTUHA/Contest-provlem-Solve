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
        long long int n,x,y,sum;
        cin>>n;
        vector<long long int> v(n),v1(n+1),v2(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            y=v2[i]+x;
            v2[i+1]=y;
            sum=max(v1[i]+x,abs(v2[i+1]));
            v1[i+1]=sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
