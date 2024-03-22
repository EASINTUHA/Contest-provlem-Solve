#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int rem=b%3;
        if(b%3!=0&&c<(3-rem))
        {
            cout<<-1<<endl; 
        }
        else
        {
        long long int sum=b+c;
        long long int res=(sum/3);
        if(sum%3!=0)
        {
            res++;
        }
        res=res+a;
                cout<<res<<endl;
        }
    }
   return 0;
}
