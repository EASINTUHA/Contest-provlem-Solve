#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,h,p,q;
        cin>>n>>m>>h;
        vector<long long int>v,v1,v2;
        for(long long int i=0;i<n;i++)
        {
            vector<long long int>v2(m);
            for(long long int j=0; j<m; ++j)
            {
                long long int x;
                cin>>x;
                v2.push_back(x);
            }
            sort(v2.begin(),v2.end());
            long long int time=0,pen=0,ct=0;
            for(long long int x:v2)
            {
                time=time+x;
                if(h>=time)
                {
                    ct++;
                    pen=pen+time;
                }
            }
            if(i==0)
            {
                p=ct;
                q=pen;
            }
            v.push_back(ct);
            v1.push_back(pen);
        }
        long long int pos=1;
        for(long long int i=1; i<n; ++i)
        {
            if(v[i]>p) pos++;
            else if(v[i]==p)
            {
                if(v1[i]<q) pos++;
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}