#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=-1,zero=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            zero= zero |x;
            one=one&x;
        }
        cout<<zero-one<<endl;
    }
    return 0;
}
