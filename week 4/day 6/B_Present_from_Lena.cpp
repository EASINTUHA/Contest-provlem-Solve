#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(j!=i)
            {
                cout<<" ";
            }
        }
        for(int j=i-1;j>=0;j--)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    int x=1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<x;j++)
        {
            cout<<"  ";
        }
        x++;
        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(j!=i)
            {
                cout<<" ";
            }
        }
        for(int j=i-1;j>=0;j--)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}