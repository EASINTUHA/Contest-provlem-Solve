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
        int n,count=0;
        cin>>n;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                count++;
            }
            sum=sum+x;
        }
        if(sum>=count+n && n>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}