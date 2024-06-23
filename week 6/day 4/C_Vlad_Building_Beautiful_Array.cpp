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
        int n,a=0,b=0,c=0,d=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2!=0)
            {
                c++;
                if(c==n)
                {
                    break;
                }
                if(b==0 || b>v[i])
                {
                    b=v[i];
                }
            }
            else
            {
                d++;
                if(d==n)
                {
                    break;
                }
                if(a==0 || a>v[i])
                {
                    a=v[i];
                }
            }
        }
        if(c==n || d==n || a>b)
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