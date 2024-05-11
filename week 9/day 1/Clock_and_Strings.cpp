#include<bits/stdc++.h>
using namespace std;
bool clock(int a,int b, int c)
{
    if(a<c)
    {
        if(a<b && b<c)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if(a<b || b<c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((clock(a,c,d) != clock(b,c,d)) && (clock(c,a,b) != clock(d,a,b)))
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

