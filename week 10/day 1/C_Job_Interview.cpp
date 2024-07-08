#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,p=0,q=0;
        long long int x=0,y=0;
        cin>>a>>b;
        int n=a+b+1;
        vector<int> v(n),v1(n),v2(n),v3(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for (int i=0;i<n;i++)
        {
            if(v[i]<v1[i] && q<b)
            {
                q++;
                v2[i]=0;
                x=x+v1[i];
            }
            else if(v[i]>v1[i] && p<=a || p<=a)
            {
                p++;
                v2[i]=1;
                x=x+v[i];
            }
            else
            {
                x=x+v1[i];
                q++;
                v2[i]=0;
            }
        }
        p=0;
        q=0;     
        for(int i=0;i<n;i++)
        {
            if(v[i]>v1[i] && p<a)
            {
                p++;
                v3[i] = 1;
                y=y+v[i];
            }
            else if (v[i]<v1[i] && q<=b || q<=b)
            {
                q++;
                v3[i]=0;
                y=y+v1[i];
            }
            else
            {
                p++;
                v3[i]=1;
                y=y+v[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            long long c=0;
            if(v2[i]==1)
            {
                c=x-v[i];
            }
            else if(v3[i]==0)
            {
                c=y-v1[i];
            }
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
