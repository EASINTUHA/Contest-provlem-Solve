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
        long long int a,b;
        cin>>a>>b;
        long long int count=0;
        while(b>1)
        {
            b=b/2;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
