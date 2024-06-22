#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    double price=(a/(1-b/100.0))*(1+c/100.0);
    cout<<price<<".00"<<endl;
    return 0;
}