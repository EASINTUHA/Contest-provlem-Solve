#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int min1=INT_MAX;
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum=sum+x;
        if(x%2 !=0)
        {
            min1=min(min1,x);
        }
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-min1<<endl;
    }
    return 0;
}