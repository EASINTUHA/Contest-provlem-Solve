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
        vector<int>str;
        vector<int>end;
        for(int i=0; i<n; ++i)
        {
            int x,y;
            cin>>x>>y;
            str.push_back(x);
            end.push_back(y);
        }
        bool flag=true;
        for(int i=1; i<n; ++i)
        {
            if(str[i]>=str[0] && end[i]>=end[0])
            {
                cout<<-1<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<str[0]<<endl;
        }
    }
    return 0;
}