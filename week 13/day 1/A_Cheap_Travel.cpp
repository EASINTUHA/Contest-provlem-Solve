#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    set<int>s;
    s.insert(n*a);
    int f=n/m,r=n%m;
    s.insert(r*a+f*b);
    s.insert(b*(f+1));
    cout<<*s.begin()<<endl;
    return 0;
}