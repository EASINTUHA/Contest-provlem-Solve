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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long int i=0, j=n-1, left=0, right=0;
        while(i<n && v[i]==v[0])
        {
            i++,left++;
        }
        while(j>=0 && v[j]==v[n-1])
        {
            j--,right++;
        }
        if(v[0]==v[n-1])
        {
            cout<<max(0LL,n-left-right)<<endl;
        }
        else
        {
            cout<<min(n-left,n-right)<<endl;
        }
    }
    return 0;
}