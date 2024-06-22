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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int x=v[0];
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(v[i] !=x)
            {
                flag=false;
                break;
            }
        }
        if(n==1)
        {
            cout<<"NO"<<endl;
        }
        if(!flag)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(i==1)
                {
                    cout<<'B';
                }
                else
                {
                    cout<<'R';
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}