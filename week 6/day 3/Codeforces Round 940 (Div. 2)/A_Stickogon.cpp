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
        vector<int> v(101,0);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[x]++;
        }
        int count=0;
        for(int i=1;i<=100;i++)
        {
            count=count+v[i]/3;
            v[i]=0;
        }
        cout<<count<<endl;
    }
    return 0;
}