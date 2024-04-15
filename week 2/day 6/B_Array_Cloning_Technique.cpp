#include <bits/stdc++.h>
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
        map<int,int> freq;
        int highest=0;
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            freq[v[i]]++;
            highest=max(highest,freq[v[i]]);
        }
        int ans=0;
        while (highest<n)
        {
            int remaining=n-highest;
            int add=highest;
            ans++;
            if(remaining < add)
            {
                ans=ans+remaining;
            } 
            else
            {
                ans=ans+add;
            }
            highest=highest+min(add, remaining);
        }
        cout<<ans<<endl;
    }
    return 0;
}
