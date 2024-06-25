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
        int x,y,n;
        cin >> x>> y >> n;
        set<int> s;
        if(n*(n-1)>2*(y-x))
            cout<<-1<<endl;
        else
        {
            s.insert(y);
            int ct = 1;
            for(int i = 1; ct<= n - 2; ++i)
            {
                auto it = *s.begin();
                s.insert(it - i);
                ct++;
            }
            s.insert(x);
            for(auto x : s)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}