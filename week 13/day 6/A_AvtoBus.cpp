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
        long long int n;
        cin>>n;
        if(n<4 || n%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long int a=n/6;
            long long int b=n/4;
            if(n%6)
            {
                a++;
            }
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}