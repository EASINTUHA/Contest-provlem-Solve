#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int value=a[k-1];
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]>=value && a[i]!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}