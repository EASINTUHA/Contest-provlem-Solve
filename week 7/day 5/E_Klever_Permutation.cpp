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
        int l=1,h=n;
        vector<int>v(n,0);
        for(int i=0;i<k;i++)
        {
            for(int j=i;j<n;j=j+k)
            {
                if(i%2==1)
                {
                    v[j]=h--;
                }
                else
                {
                    v[j]=l++;
                }
            }
        }
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}