#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n+2);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int i=0,j=n-1;
        bool flag=true;
        int a,b;
        while(i<j)
        {
            if(v[i]!=v[j])
            {
                flag=false;
                a=v[i];
                b=v[j];
                break;
            }
            i++;
            j--;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int ans1=1,ans2=1;
            vector<int>v1,v2;
            for(int i=0;i<n;i++)
            {
                if(v[i]==a)
                {
                    continue;
                }
                v1.push_back(v[i]);
            }
            for(int i=0;i<n;i++)
            {
                if(v[i]==b)
                {
                    continue;
                }
                v2.push_back(v[i]);
            }
            i=0;
            j=v1.size()-1;
            while(i<j)
            {
                if(v1[i]!=v1[j])
                {
                    ans1=0;
                    break;
                }
                i++;
                j--;
            }
            i=0;
            j=v2.size()-1;
            while(i<j)
            {
                if(v2[i]!=v2[j])
                {
                    ans2=0;
                    break;
                }
                i++;
                j--;
            }
            if(ans1==1 || ans2==1)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}