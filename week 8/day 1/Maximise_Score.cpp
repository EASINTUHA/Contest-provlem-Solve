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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int max1=INT_MAX,ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            max1=max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            if(ans>max1)
            {
                ans=max1;
            }
        }
        int temp1=abs(v[0]-v[1]);
        int temp2=abs(v[n-1]-v[n-2]);
        if (temp1 < ans)
        {
            if (temp1<temp2)
            {
                ans=temp1;
            }
            else
            {
                ans=temp2;
            }
        }
        else
        {
            if (ans>temp2)
            {
                ans=temp2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}