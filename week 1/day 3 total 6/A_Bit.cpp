#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="X++")
        count++;
        else if(s=="++X")
        count++;
        else
        count--;
    }
    cout<<count<<endl;
    return 0;
}