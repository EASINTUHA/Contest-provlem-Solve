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
        cin>>v[0];
        int m=v[0];
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
            m=m^v[i];
        }
        int mn=m;
        for(int i=0;i<n;i++)
        {
            int x=(m^v[i]);
            mn=min(mn,x);
        }
        cout<<mn<<endl;
    }
    return 0;
}
/*
2 4=6
6 3=5
5 6=3
*/
/*
mn=3
3rd test m3=0
*/