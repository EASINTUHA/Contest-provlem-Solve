#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,count=0,p=-10;
        cin>>n>>k;
        vector<long long> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        unordered_map<long long,set<long long>> mp;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]%k].find(v[i])==mp[v[i] % k].end())
            {
                mp[v[i]%k].insert(v[i]);
            }
            else
            {
                mp[v[i]%k].erase(v[i]);
            }
        }
        for(auto &x:mp)
        {
            if(x.second.size()%2==1)
            {
                count++;
                p=x.first;
            }
        }
        if(count>1)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long total=0;
            for(auto &x : mp)
            {
                if(x.first !=p)
                {
                    while(x.second.size()>0)
                    {
                        long long y=*x.second.begin();
                        x.second.erase(*x.second.begin());
                        if(x.second.size()==0)
                        {
                            break;
                        }
                        long long tp=*x.second.begin();
                        x.second.erase(tp);
                        total=total+(tp-y)/k;
                    }
                }
            }
            if(count>0)
            {
                vector<long long int> v;
                for(long long int x:mp[p])
                {
                    v.push_back(x);
                }
                long long int m=v.size();
                if(m==1)
                {
                    cout<<total<<endl;
                    continue;
                }
                vector<long long int>v1(m,0),v2(m,0);
                v1[1]=v[1]-v[0];
                for(long long int i=3;i<m;i=i+2)
                {
                    v1[i]=v[i]-v[i-1]+v1[i-2];
                }
                v2[m-2]=v[m-1]-v[m-2];
                for(long long i=m-4;i>=0;i=i-2)
                {
                    v2[i]=v[i+1]-v[i]+v2[i+2];
                }
                long long temp=INT_MAX;
                for(long long i=0;i<m;i=i+2)
                {
                    long long x=0;
                    if(i>0)
                    {
                        x=x+v1[i-1];
                    }
                    if(i+1<m)
                    {
                        x=x+v2[i+1];
                    }
                    temp=min(temp,x);
                }
                total=total+temp/k;
            }
            cout<<total<<endl;
        }
    }
    return 0;
}