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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s="1";
        int x=v[0];
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(v[i]>=x && flag)
            {
                s.push_back('1');
                x=v[i];
            }
            else if(v[i]<x && v[0]>=v[i] && flag)
            {
                flag=false;
                x=v[i];
                s.push_back('1');
            }
            else if(v[i]>=x && v[i]<=v[0])
            {
                x=v[i];
                s.push_back('1');
            }
            else
            {
                s.push_back('0');
            }
        }
        cout<<s<<endl;
    }
    return 0;
}