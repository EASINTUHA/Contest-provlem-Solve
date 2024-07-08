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
        for(auto &i:v)  cin>>i;
        bool flag=true;
        for(int i=3;i<n;i++)
        {
            if(v[i]<v[i-1] && (i & (i-1)))
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}