#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin>>n;
    for(auto i : arr)
    {
        if(n%i==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}