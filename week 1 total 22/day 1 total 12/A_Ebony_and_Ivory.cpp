#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    int d=c/a+1;
    int e=c/b+1;
    for(int i=0;i<=d;i++)
    {
        for(int j=0;j<=e;j++)
        {
            if(i*a+b*j==c)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}