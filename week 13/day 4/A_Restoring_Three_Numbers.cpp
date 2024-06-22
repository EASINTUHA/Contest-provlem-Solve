#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n=4;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[3]-v[2]<<" "<<v[3]-v[1]<<" "<<v[3]-v[0]<<endl;
    return 0;
}