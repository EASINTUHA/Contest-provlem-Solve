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
        int s=0;
        for(int i=0;i<n;i++)
        {
            cout<<s+1<<" ";
            s=s+2;
        }
        cout<<endl;
    }
    return 0;
}