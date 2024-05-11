#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int size=s.size();
        if (size==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        string r=s;
        sort(r.begin(),r.end());
        
        if (r[0]==r[size-1])
        {
            cout << "NO\n";
        }
        else
        {
            cout<<"YES"<<endl;
            if (r==s)
            {
                reverse(r.begin(),r.end());
            }
            cout<<r<<endl;
        }
    }
    return 0;
}