#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int prev=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==-1)
            {
                continue;
            }
            if(prev==-1)
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(v[j+1]>1)
                    {
                        v[j]=v[j+1]/2;
                    }
                    else
                    {
                        v[j]=v[j+1]*2;
                    }
                }
                prev=i;
                continue;
            }
            int l=prev,r=i;
            while(r-l>1)
            {
                if(v[r]>v[l])
                {
                    v[r-1]=v[r]/2;
                    r--;
                }
                else
                {
                    if(v[l]>1)
                    {
                        v[l+1]=v[l]/2;
                    }
                    else
                    {
                        v[l+1]=v[l]*2;
                    }
                    l++;
                }
            }
            prev=i;
        }
        if(prev<n-1)
        {
            if(prev==-1)
            {
                v[0]=1;
                prev=0;
            }
            for(int i=prev+1;i<n;i++)
            {
                if(v[i-1]>1)
                {
                    v[i]=v[i-1]/2;
                }
                else
                {
                    v[i]=v[i-1]*2;
                }
            }
        }
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            if (v[i]!=v[i+1]/2 && v[i+1]!=v[i]/2)
            {
                cout<<-1<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
