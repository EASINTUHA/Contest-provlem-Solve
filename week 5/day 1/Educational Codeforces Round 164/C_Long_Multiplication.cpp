#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a<b)
        {
            swap(a,b);
        }
        bool ans=false;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>b[i] && ans)
            {
                swap(a[i],b[i]);
            }
            if(a[i]!=b[i])
            {
                ans=true;
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}