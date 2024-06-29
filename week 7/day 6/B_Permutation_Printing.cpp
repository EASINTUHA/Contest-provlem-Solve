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
        vector<int>v;
        int s=1,e=n;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                v.push_back(s++);
            }
            else
            {
                v.push_back(e--);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}