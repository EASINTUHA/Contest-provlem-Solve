#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    if(c==a)
    a--;
    else
    b--;
    if(a>b)
    cout<<a+c<<endl;
    else
    cout<<b+c<<endl;
    return 0;
}