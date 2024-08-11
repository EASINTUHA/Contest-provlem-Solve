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
        if(s[i]==',')
        {
            cout<<endl;
        }
        else
        {
            cout<<s[i];
        }
    }
    return 0;
}