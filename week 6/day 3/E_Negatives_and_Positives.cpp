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
        int neg_count=0;
        int min1=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<0)
            {
                x=-x;
                neg_count++;
            }
            min1=min(min1,x);
            sum=sum+x;
        }
        if(neg_count%2==1)
        {
            sum=sum-min1-min1;
        }
        cout<<sum<<endl;
    }
    return 0;
}