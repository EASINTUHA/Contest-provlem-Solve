#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    long long int N=1e5+10;
    cin>>n;
    vector<long long int> v(N);
    for(long long int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        v[x]++;
    }
    vector<long long int> v1(N);
    for(long long int i=1;i<N;i++)
    {
        v1[i]=v1[i-1]+v[i]; 
    }
    int q;
    cin>>q;
    while(q--)
    {
        long long int x;
        cin>>x;
        if(x<N)
            cout<<v1[x]<<endl;
        else cout<<v1[N-1]<<endl;
    }
    return 0;
}