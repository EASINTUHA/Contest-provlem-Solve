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
        int n,c,d;
        cin>>n>>c>>d;
        map<int,int>m;
        for(int i=0;i<n*n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        bool flag=true;
        int p=m.begin()->first;
        m[p]--;
        for(int i=0;i<n;i++)
        {
            int q=p;
            for(int j=0;j<n-1;j++)
            {
                if(m[q+d]==0)
                {
                    flag=false;
                    cout<<"NO"<<endl;
                    break;
                }
                m[q+d]--;
                q+=d;
            }
            if(m[p+c]==0 && i<n-1 && flag)
            {
                flag=false;
                cout<<"NO"<<endl;
                break;
            }
            m[p+c]--;
            p=p+c;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}