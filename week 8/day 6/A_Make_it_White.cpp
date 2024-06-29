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
        int i=0,j=s.size()-1;
        while(s[i]=='W')
            i++;
        while(s[j]=='W')
            j--;
        cout<<j-i+1<<endl;
    }
    return 0;
}