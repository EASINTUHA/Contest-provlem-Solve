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
        int n,x,sum=0;
        cin>>n>>x;
        set<int>st;
        for(int i=0; i<n; ++i)
        {
            int k;
            cin>>k;
            if(k%x)
            {
                st.insert(i);
                st.insert(n-i-1);
            }
            sum+=k;
        }
        if(sum%x)
        {
            cout<<n<<endl;
        }
        else if(st.empty())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<*st.rbegin()<<endl;
        }
    }
    return 0;
}