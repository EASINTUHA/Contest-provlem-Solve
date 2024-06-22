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
        string s;
        cin>>s;
        cout<<s[0];
        for(int i=1; i<s.size()-1; i+=2)
        {
            cout<<s[i];
        }
        cout<<s.back()<<endl;
    }
    return 0;
}