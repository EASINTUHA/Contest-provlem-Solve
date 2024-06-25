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
        int n,k,x;
        cin>>n>>k>>x;
        if(n<k || x+1<k)
        {
            cout<<-1<<endl;
        }
        else
        {
            int i=0,count=0,sum=0;
            while(i<k && count<n)
            {
                sum=sum+i;
                i++;
                count++;
            }
            if(count<n)
            {
                if(x!=k)
                {
                    while(count<n)
                    {
                        sum=sum+x;
                        count++;
                    }
                }
                else if(x==k)
                {
                    x--;
                    while(count<n)
                    {
                        sum=sum+x;
                        count++;
                    }
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}