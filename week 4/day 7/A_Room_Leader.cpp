#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,string>m;
    for(int i=0;i<n;i++)
    {
        string s;
        int r,w,a,b,c,d,e;
        cin>>s>>r>>w>>a>>b>>c>>d>>e;
        int p=r*100+a+b+c+d+e-w*50;
        m[p]=s;
    }
    auto it=*--m.end();
    cout<<it.second<<endl;
    return 0;
}