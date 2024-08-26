#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else
        {
            i++;
            if(s[i]=='.')
            {
                cout<<1;
            }
            else
            {
                cout<<2;
            }
        }
    }
    cout<<endl;
    return 0;
}