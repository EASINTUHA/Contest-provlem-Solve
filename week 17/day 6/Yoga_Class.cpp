#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int total=0;
        for(int i=0;i<=a/2;i++)
        {
            int x=a-(i*2);
            int y=(i*c)+(x*b);
            total= max(total,y);
        }
        cout<<total<<endl;
    }
    return 0;
}
