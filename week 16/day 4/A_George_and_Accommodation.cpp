#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m-n>1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
