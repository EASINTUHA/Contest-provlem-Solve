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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag=true;
        for(int i=2;i<n;i++)
        {
            if(flag)
            {
                if(v[i]<v[i-1] && v[i-2]<v[i-1])
                {
                    cout<<"YES"<<endl;
                    cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                    flag=false;
                }
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}