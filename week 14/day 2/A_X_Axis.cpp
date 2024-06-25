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
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int x=abs(v[0]-v[1])+abs(v[2]-v[1]);
        cout<<x<<endl;
    }
    return 0;
}
