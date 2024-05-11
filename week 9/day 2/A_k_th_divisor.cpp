#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    int count=0;
    vector<long long int>v;

    for(long long int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            count++;
            if(i!=n/i)
            {
                v.push_back(n/i);
                count++;
            }
        }
    }
    sort(v.begin(),v.end());
    if(count>=m)
    {
        cout<<v[m-1]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return  0;
}
