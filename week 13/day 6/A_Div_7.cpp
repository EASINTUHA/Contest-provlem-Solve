#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s = to_string(n);
    s.pop_back();
    if(n%7==0)
    {
        cout<<n<<endl;
        return;
    }
    for(int i=0; i<10; ++i)
    {
        s += to_string(i);
        int x = stoi(s);
        if(x%7 == 0)
        {
            cout<<x<<endl;
            return;
        }
        s.pop_back();
    } 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}