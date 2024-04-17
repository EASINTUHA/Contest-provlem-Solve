#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        bool flag=true;
        if (v[0] != v[n-1])
        {
            flag=false;
        } 
        else 
        {
            for (int i=1;i<n-1;i++)
            {
                if(v[i]<v[0])
                {
                    flag=false;
                }
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


