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
        string s1,s2;
        cin>>s1>>s2;
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}