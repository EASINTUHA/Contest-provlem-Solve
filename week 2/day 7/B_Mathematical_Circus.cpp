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
        int n,k;
        cin>>n>>k;
        if(k%4==0)
        {
            cout<<"NO"<<endl;
        }
        else if(k%4==2)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i+=2)
            {
                if((i+1)%4)
                {
                     cout<<i+1<<" "<<i<<endl;
                }
                else
                {
                    cout<<i<<" "<<i+1<<endl;
                }
            }
        }
        else
        {   
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i+=2)
            {
                cout<<i<<" "<<i+1<<endl;
            }
        }
    }
    return 0;
}