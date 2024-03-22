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
        long long int sum=v[0];
        long long int sale=v[0]*2;
        for(int i=1;i<n;i++)
        {
            long long int sum2=sum+v[i]*2;
            if(sum2>sale)
            {
                sale=sum2;
            }
            sum=sum+v[i];
        }
        cout<<sale<<endl;
    }
    return 0;
}