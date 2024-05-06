#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<char>v;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(flag)
        {
            v.push_back('a');
            v.push_back('a');
            flag=false;
        }
        else
        {
            v.push_back('b');
            v.push_back('b');
            flag=true;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}