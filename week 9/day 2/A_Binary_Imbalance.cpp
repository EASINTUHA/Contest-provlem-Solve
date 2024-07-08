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
        string s;
        cin>>n>>s;
        bool flag=true;
        for(auto c:s)
        {
            if(c=='0')
            {
                cout<<"YES"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}