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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            sort(v.begin(),v.end());
            bool valid=true;
            for(int i=1;i<n;i++)
            {
                if(v[i]-v[i-1]>1)
                {
                    valid=false;
                    break;
                }
            }
            if(valid)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            } 
        }
    }
    return 0;
}