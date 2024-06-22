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
        int n;
        string s;
        cin>>n>>s;
        int size=s.size();
        while(size)
        {
            char f=*s.begin();
            char e=*s.rbegin();
            if((f=='0' && e=='1' && f!=e) || (f=='1' && e=='0' && f!=e))
            {
                s.erase(s.begin());
                s.erase(--s.end());
            }
            else
                break;
        }
        cout<<s.size()<<endl;
    }
    return 0;
}