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
        vector<int> v(n+1,0);
        bool flag=false;
        int val=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[x]++;
            if(v[x]==3)
            {
                flag=true;
                val=x;
            }
        }
        if(flag==true)
        {
            cout<<val<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}