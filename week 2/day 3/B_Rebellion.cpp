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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0, j=n-1; i<j; i++, j--)
        {
            if(a[i]==1 && a[j]==0)
            {
                count++;
            }
            else if(a[i]==1 && a[j]==1)
            {
                i--;
            }
            else if(a[i]==0 && a[j]==0)
            {
                j++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}