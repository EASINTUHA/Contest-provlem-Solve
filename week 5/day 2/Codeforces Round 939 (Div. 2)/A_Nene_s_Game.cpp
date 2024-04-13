#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,q;
        cin>>k>>q;
        vector<int>v1(k),v2(q);
        for(int i=0;i<k;i++)
        {
            cin>>v1[i];
        }
        int first=v1[0];
        for(int i=0;i<q;i++)
        {
            cin>>v2[i];
            if(v2[i]>=first)
            {
                int val=first-1;
                cout<<val<<" ";
            }
            else
            {
                cout<<v2[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
