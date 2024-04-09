#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int price;
        price=(n/2)*b+(n%2)*a;
        if(b>=2*a && price>n*a)
        {
            price=n*a;
        }
        cout<<price<<endl;
    }
    return 0;
}