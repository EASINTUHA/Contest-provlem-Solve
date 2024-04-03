#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int maxe=0,mine=0,current=0;
        for (int i=0;i<n;i++)
        {
            if(l<=v[i] && v[i]<=r)
                current++;
            else
                current--;
            maxe= max(maxe,current);
            mine= min(mine,current);
        }
        cout<<maxe<<" "<<mine<<endl;
    }
    return 0;
}
