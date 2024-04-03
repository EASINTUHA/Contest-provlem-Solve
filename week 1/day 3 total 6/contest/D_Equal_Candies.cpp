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
        long long int sum=0;
        int minum=INT_MAX;;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum=sum+x;
            if(x<minum)
            {
                minum=x;
            }
        }
        cout<<sum-(minum*n)<<endl;
    }
    return 0;
}