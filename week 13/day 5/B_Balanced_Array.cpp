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
        vector<int>v;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else
        {
            int even=0,odd=0;
            for(int i=2;i<=n;i=i+2)
            {
                v.push_back(i);
                even=even+i;
            }
            int count=0;
            for(int i=1; i<n; i+=2)
            {
                if(count==(n/2)-1)
                    break;
                v.push_back(i);
                odd=odd+i;
                count++;
            }
            v.push_back(even-odd);
            cout<<"YES"<<endl;
            for(auto it:v)
                cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}