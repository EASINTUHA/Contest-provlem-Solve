#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n&1)
    {
        n--;
    }
    cout<<n<<" "<<2<<endl;
    return 0;
}