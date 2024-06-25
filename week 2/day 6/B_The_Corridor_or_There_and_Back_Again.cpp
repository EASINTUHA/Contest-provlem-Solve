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
        map<int,int>m;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(y%2==0)
                y--;
            m.insert(make_pair(x+y/2,x));
        }
        auto it=m.begin();
        cout<<it->first<<endl;
    }
    return 0;
}