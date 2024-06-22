#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,l, c, d, p, nll, np;
    cin>>a>>b>>l>>c>>d>>p>>nll>>np;
    int drink=(b*l)/nll;
    int slices=c*d;
    int salt=p/np;
    int toast=min({drink,slices,salt});
    cout<<toast/a<<endl;
    return 0;
}