#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    if(n<7)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(s[0] == s[n-1])
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]!=s[n-i-1])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}