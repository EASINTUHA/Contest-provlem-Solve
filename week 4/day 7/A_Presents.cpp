#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]=i+1; 
    } 
    for(auto it:m)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
    return 0;
}