#include<bits/stdc++.h>
using namespace std;
bool is_square(int num)
{
    int x= sqrt(num);
    return x*x==num;
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
        long long int sum=0;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            sum +=x;
        }
        if(is_square(sum))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}