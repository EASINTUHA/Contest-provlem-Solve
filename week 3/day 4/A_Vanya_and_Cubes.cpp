#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cubes=0;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cubes+=(i*i+i)/2;
        if(cubes>n)
        {
            cout<<i-1<<endl;
            break;
        }
        else if(cubes==n)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}