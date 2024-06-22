#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(find(v.begin(),v.end(),s)==v.end())
        {
            cout<<"NO"<<endl;
            v.push_back(s);
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}