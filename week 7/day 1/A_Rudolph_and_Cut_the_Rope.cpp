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
        int n;
        cin>>n;
        int count=0;
        for(int i=0; i<n; ++i)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}