#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n/4;
        int x=n%4;
        int ch=x/2;
        cout<<a+ch<<endl;
    }
    return 0;
}
