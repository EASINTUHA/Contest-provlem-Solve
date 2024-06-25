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
        long long int a,b,c;
        cin>>a>>b>>c;
        long long d=a%b;
        d=b-d;
        if(c<d)
        {
            cout<<a+c<<endl;
        }
        else if(c==d)
        {
            a=a+c;
            while(a%b==0)
            {
                a=a/b;
            }
            cout<<a<<endl;
        }
        else
        {
            for(int i=0;i<1;)
            {
                long long int e=d;
                if(a==1)
                {
                    break;
                }
                if(c>=e)
                {
                    c=c-e;
                    a=a+e;
                    while(a%b==0)
                    {
                        a=a/b;
                    }
                    d=b-a%b;
                }
                else
                {
                    a=a+c;
                    c=0;
                    break;
                }
            }
            if(c==0)
            {
                cout<<a<<endl;
            }
            else
            {
                long long int x=c%(b-1)+1;
                cout<<x<<endl;
            }
        }
    }
    return 0;
}