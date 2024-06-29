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
        set<int>s1,s2;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s1.insert(x);
            s2.insert(x+n);
        }
        int ans=0,count=0;
        for(auto p:s1)
        {
            count++;
            while(s2.size() && *s2.begin()<=p)
            {
                s2.erase(s2.begin());
                count--;
            }
            ans = max(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}