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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v[0] != v[1])
        {
            if(v[0]==v[2])
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if(v[i] !=v[i+1] && v[i] !=v[i-1])
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if(v[i] !=v[i+1] && v[i] ==v[i-1])
                {
                    cout<<i+2<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}