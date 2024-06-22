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
        string n;
        cin>>n;
        cout<<9*(n.size()-1)+n[0]-'0'<<endl;
    }
    return 0;
}