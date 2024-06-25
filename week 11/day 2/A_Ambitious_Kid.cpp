#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<0)
            x=x*-1;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    return 0;
}