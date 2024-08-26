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
        int n,p,q,total=0,sum=0,j=0;
        cin>>n>>p>>q;
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]>q)
            {
                sum=0;
                j=i+1;
            }
            else
            {
                sum=sum+v[i];
                while(sum<p && i<n-1)
                {
                    i++;
                    sum=sum+v[i];
                }
                if(sum>=p && sum<= q)
                {
                    total++;
                    sum=0;
                    j=i+1;
                }
                else if(sum>q)
                {
                    sum=0;
                    i=j;
                    j++;
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}