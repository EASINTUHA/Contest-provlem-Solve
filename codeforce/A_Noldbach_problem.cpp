#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    const int N=1000;
    vector<int>is_prime(1001,1);
    int n,k;
    cin>>n>>k;
    is_prime[0]=is_prime[1]=0;
    for(int i=2; i<=n; ++i)
    {
        if(is_prime[i])
        {
            for(int j=2*i; j<=n; j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
    vector<int>v;
    for(int i=1; i<=n; i++)
    {
        if(is_prime[i])
        {
            v.push_back(i);
        }
    }
    int count=0;
    for(int i=0; i<v.size(); ++i)
    {
        for(int j=0; j<i; ++j)
        {
            if(v[j]+v[j-1]==v[i]-1)
            {
                count++;
                break;
            }
        }
        if(count>=k)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}