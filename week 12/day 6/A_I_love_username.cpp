#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int left=v[0],right=v[0],count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<right)
        {
            count++;
            right=v[i];
        }
        else if(v[i]>left)
        {
            count++;
            left=v[i];
        }
    }
    cout<<count<<endl;
    return 0;
}