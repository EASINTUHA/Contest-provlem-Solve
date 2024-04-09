#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;
        cout<<(max(6LL,n+1)/2)*5<<endl;
    }
    return 0;
}