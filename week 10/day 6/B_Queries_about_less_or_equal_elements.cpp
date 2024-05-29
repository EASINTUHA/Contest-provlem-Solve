#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> v(a);
    vector<int> v1(b);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<b;i++)
    {
        int count=upper_bound(v.begin(),v.end(),v1[i])-v.begin();
        cout<<count<<" ";
    }
    return 0;
}

