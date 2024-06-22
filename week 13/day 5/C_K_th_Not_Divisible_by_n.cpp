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
        int n,k;
        cin>>n>>k;
        int L=1,R=5e9+7,ans=-1;
        while(L<=R)
        {
            int mid = L+(R-L)/2;
            if(mid%n==0)    mid++;
            int pos=mid-mid/n;
            if(pos<k)
                L=mid+1;
            else if(pos>k)
                R=mid-1;
            else
            {
                ans = mid;
                break;
            }      
        }
        cout<<ans<<endl;
    }
    return 0;
}