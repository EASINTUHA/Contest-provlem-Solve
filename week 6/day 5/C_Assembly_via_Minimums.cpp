#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int pair=n*(n-1)/2;
        vector<int> v(pair);
        for(int i=0;i<pair;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int i=0;
        while(i<pair)
        {
            cout<<v[i]<<" ";
            n--;
            i=i+n;
        }
        cout<<v[pair-1]<<endl;
    }
    return 0;
}