#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b)
        {
            int temp=b;
            b=a;
            a=temp;
        }
        int count=0;
        while(a<b)
        {
            a+=c;
            b-=c;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}