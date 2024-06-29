#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,total=0;
        cin>>n;
        for(int i=1; i<n; ++i)
        {
            int x;
            cin>>x;
            total=total+x;
        }
        total=-total;
        cout<<total<<endl;
    }
    return 0;
}