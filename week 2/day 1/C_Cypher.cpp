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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(int j=0;j<x;j++)
            {
                if(s[j]=='D')
                    v[i]++;
                else
                    v[i]--;
                if(v[i]>9)
                    v[i]=v[i]%10;
                if(v[i]<0)
                    v[i]=9;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
