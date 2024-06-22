#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int N = 1e6;
    vector<bool> v(N+1,true);
    v[0]=v[1]=false;
    for(int i = 2; i * i <= N; ++i)
    {
        if (v[i])
        {
            for (int j=i*i;j<=N;j=j+i)
            {
                v[j]=false;
            }
        }
    }
    long long n;
    cin>>n;
    while(n--)
    {
        long long x;
        cin>>x;
        long long r= sqrt(x);
        if(r*r!=x) cout<<"NO"<<endl;
        else if(v[sqrt(x)]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}