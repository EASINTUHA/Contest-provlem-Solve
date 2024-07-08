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
        map<int,int>m;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        if(m.size()>2)
        {
            cout<<"No"<<endl;
        }
        else if(m.size()==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            bool flag=true;
            for(auto x:m)
            {
                if(x.second<n/2)
                {
                    cout<<"No"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}