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
        int d;
        cin>>d;
        if(d==0)
        {
            cout<<fixed<<setprecision(9)<<"Y "<<0.0<<" "<<0.0<<endl;
        }
        else if(d<4)
        {
            cout<<"N"<<endl;
        }
        else
        {
            double a=(d+sqrt(d*d-4*d))/2.0;
            double b=(d-sqrt(d*d-4*d))/2.0;
            cout<<fixed<<setprecision(9)<<"Y "<<a<<" "<<b<<endl;
        }
    }
    return 0;
}