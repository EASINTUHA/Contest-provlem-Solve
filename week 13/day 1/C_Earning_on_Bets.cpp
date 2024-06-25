#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b) {
    return(a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int l=1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            l=lcm(l,v[i]);
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum=sum+l/v[i];
        }
        if(sum>=l)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<l/v[i]<<" "; 
            }  
            cout<<endl;
        }
    }
    return 0;
}
