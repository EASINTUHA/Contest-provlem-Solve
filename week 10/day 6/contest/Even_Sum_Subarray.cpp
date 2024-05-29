#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,total=0,sum=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+v[j];
                if(sum%2==0)
                {
                    total=max(total,j-i+1);
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
