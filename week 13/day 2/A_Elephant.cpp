#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%5)
    {
        cout<<(n/5)+1<<endl;
    }
    else
    {
        cout<<(n/5)<<endl;
    }
    return 0;
}