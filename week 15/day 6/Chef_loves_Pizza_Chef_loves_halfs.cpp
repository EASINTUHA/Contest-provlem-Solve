#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long int> v(33,2);
    for(int i=1;i<=31;i++)
    {
        long long int x=pow(2,i);
        v[i]=x;
    }
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y=2;
        cin>>x;
        x=2*x;
        for(int i=1;i<32;i++)
        {
            if(v[i]>x)
            {
                cout<<x-y<<endl;
                break;
            }
            else
            {
                y=v[i];
            }
        }
    }
    return 0;
}