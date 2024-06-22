#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int count=1;
    for (int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}