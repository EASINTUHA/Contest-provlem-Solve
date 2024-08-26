#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long int> v(33,2);
    for(int i=1;i<=31;i++)
    {
        long long int x=pow(2,i);
        v[i]=x;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }

    }
    return 0;
}