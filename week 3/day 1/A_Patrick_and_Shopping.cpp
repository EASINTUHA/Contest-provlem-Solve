#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,dis=0;
    cin>>a>>b>>c;
    set<int>s;
    s.insert(a+b+c);
    s.insert(2*a+2*b);
    s.insert(2*a+2*c);
    s.insert(2*b+2*c);
    auto it= s.begin();
    cout<<*it<<endl;
    return 0;
}