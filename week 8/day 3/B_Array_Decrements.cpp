#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for (int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>v2[i];
        }
        bool flag=true;
        int req=-1;
        int x=-1;
        for (int i=0;i<n;i++)
        {
            if (v2[i]>v1[i])
            {
                flag=false;
                break;
            }
            int p=v1[i]-v2[i];
            if(v2[i]==0)
            {
                x=max(x,p);
            }
            else
            {
                if(req==-1)
                {
                    req=p;
                }
                else if(req != p) 
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            if(req==-1)
            {
                req=x;
            }
            else if(x>req)
            {
                flag=false;
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
    }
    return 0;
}
