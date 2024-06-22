#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>v={"January","February","March","April","May","June","July","August","September","October","November","December"};
    string s;
    int n;
    cin>>s>>n;
    auto it=find(v.begin(),v.end(),s);
    int index=(n+it-v.begin())%12;
    cout<<v[index]<<endl;
    return 0;
}