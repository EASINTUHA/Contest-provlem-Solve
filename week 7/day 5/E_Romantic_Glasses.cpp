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
        cin>>n;
        vector<int>v(n);
        for(auto &x:v)  cin>>x;
        set<int>st;
        st.insert(0);
        long long int sum=0;
        bool flag=false;
        for(int i=0; i<n; ++i)
        {
            if(i&1)
                v[i] *= -1;
            sum += v[i];
            if(st.find(sum) != st.end())
            {
                flag=true;
            }
            st.insert(sum);
            if(flag)
            {
                break;
            }
        }
        if(flag)
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