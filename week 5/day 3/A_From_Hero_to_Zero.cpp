//problem link
//https://codeforces.com/problemset/problem/1175/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int count=0;
        while(n!=0)
        {
            if(n % m == 0) 
            {
                n=n/m;
                count++;
            }
            else {
                count=count+n%m; // decrement by remainder
                n=n-n%m;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}