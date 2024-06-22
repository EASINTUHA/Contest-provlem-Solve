#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int d=c/a;
    bool flag=false;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if (i*a+j*b==c) 
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
