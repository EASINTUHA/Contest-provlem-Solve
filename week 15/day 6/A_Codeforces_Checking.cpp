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
        //codeforces
        char c;
        cin>>c;
        c=tolower(c);
        if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='o' || c=='r' || c=='s')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}