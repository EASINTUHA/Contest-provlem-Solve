#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,min=0,p=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        p=p-a+b;
        if(p>min)
        {
            min=p;
        }
    }
    cout<<min<<endl;
    return 0;
}