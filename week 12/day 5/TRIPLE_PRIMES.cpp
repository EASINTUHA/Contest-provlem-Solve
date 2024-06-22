#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x;
    cin>>t;
    set<int> st;
    vector<int> v,v1(N+1);
    v1[0]=0;
    v1[1]=1; 
    for(int i=2;i<=N;i++)
    {
        if(!v1[i]) 
        {
            v.push_back(i);
            v1[i]=i;
        }
        x=v.size();
        for(int j=0;j<x &&  v[j]<=v1[i] &&  i*v[j]<=N;j++) 
        {
            v1[i*v[j]]=v[j];  
        } 
    } 
    for(int i=0;i<x;i++)
    {
        st.insert(v[i]*v[i]);
        v[i]=v[i]*v[i];
    }
    while(t--)
    {
        int n;
        cin >> n;
        bool flag=false;
        if(n<38)
        {
            flag=false;
        }
        else
        {
            for(int i=0;i<x;i++)
            {
                if(v[i]*v[i]>=n)
                {
                    break;
                }
                for(int j=i+1;j<x-1;j++)
                {
                    int y=n-(v[i]+v[j]);
                    if(0>y)
                    {
                        break;
                    }
                    if(st.find(y)!=st.end() && y!=v[i] && y!=v[j])
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
