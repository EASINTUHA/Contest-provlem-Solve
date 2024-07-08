#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,mx=0,my=0;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mx=x>mx?x:mx;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        my=x>my?x:my;
    }
    cout<<mx<<" "<<my<<endl;
    return 0;
}