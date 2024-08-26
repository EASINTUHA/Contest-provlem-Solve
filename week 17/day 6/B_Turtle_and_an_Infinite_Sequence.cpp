#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,p=1,q=0,count=0;
        cin>>a>>b;
        while(a>0)
        {
            if(a%2!=0)
            {
                count=count+p;
                q=q+p;
            }
            else
            {
                int x=min(p-q,q+1);
                if(x<=b)
                {
                    count=count+p;
                }
            }
            p=p*2;
            a=a/2;
        }

        while(p-q<=b)
        {
            count=count+p;
            p=p*2;
        }
        cout<<count<<endl;
    }
    return 0;
}
