#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    auto it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    cout<<4-v.size()<<endl;
    return 0;
}