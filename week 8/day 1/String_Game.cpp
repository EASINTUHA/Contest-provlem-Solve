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
        int one=0,zero=0;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int minum=min(one,zero);
        if(minum%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            cout<<"Zlatan"<<endl;
        }
    }
    return 0;
}