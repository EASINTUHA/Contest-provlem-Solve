#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int mx=max(x,y);
    if(mx==1)
        cout<<"1/1"<<endl;
    else if(mx==2)
        cout<<"5/6"<<endl;
    else if(mx==3)
        cout<<"2/3"<<endl;
    else if(mx==4)
        cout<<"1/2"<<endl;
    else if(mx==5)
        cout<<"1/3"<<endl;
    else
        cout<<"1/6"<<endl;
    return 0;
}