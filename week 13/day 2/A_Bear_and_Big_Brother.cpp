#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,i;
    cin>>a>>b;
    for(i=1;a<=b;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}