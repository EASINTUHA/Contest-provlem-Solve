#include<bits/stdc++.h>
using namespace std;
bool good(vector<int>v, int x)
{
    v.erase(v.begin()+x);
    int last=__gcd(v[0],v[1]);
    for(int i=1;i<v.size()-1;i++)
    {
        int cur=__gcd(v[i],v[i+1]);
        if(cur<last)
        {
            x=i;
            return false;
        }
        last=cur;
    }
    return true;
}
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int x=-1;
        int last=__gcd(v[0],v[1]);
        for(int i=1; i<n-1; ++i)
        {
            int cur=__gcd(v[i],v[i+1]);
            if(cur<last)
            {
                x=i;
                break;
            }
            last=cur;
        }
        if(x==-1)
        {
            cout<<"YES"<<endl;
        }
        else if(good(v,x-1) || good(v,x) || good(v,x+1))
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