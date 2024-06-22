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
        int a,b;
        cin>>a>>b;
        int count=0;
        while(a!=b)
        {
            if(a==b) break;
            else if(a>b)
            {
                int d=a-b;
                if(d%2==0)
                {
                    a=a-d;
                    count++;
                }
                else
                {
                    a=a-d-1;
                    count++;
                }
            }
            else
            {
                int d=b-a;
                if(d%2!=0)
                {
                    a=a+d;
                    count++;
                }
                else
                {
                    a=a+d-1;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}