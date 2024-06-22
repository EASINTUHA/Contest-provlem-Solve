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
        int min=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(min<x)
            {
                min=x;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}