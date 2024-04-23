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
        int p=0,q=0,r=0,s=0;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>0)
            {
                p++;
            } 
            else
            {
                p=0;
            }
            q=max(q, p);
        }
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>0)
            {
                r++;
            }
            else
            {
                r = 0;
            }
            s=max(s, r);
        }
        if(q>s)
        {
            cout<<"Om"<<endl;
        } 
        else if(q<s)
        {
            cout<<"Addy"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}
