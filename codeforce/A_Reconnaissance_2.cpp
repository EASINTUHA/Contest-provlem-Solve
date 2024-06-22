#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int d=abs(v[0]-v[n-1]);
    int x=1,y=n;
    for(int i=1;i<n;i++)
    {
        int c=abs(v[i]-v[i-1]);
        if(c<d)
        {
            d=c;
            x=i;
            y=i+1;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}