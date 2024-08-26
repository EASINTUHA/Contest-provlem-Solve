#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>s;
        cin>>n;
        int count=0;
        int size=s.size();
        for(int i=0;i<size/2;i++)
        {
            if(s[i] !=s[size-i-1])
            {
                int x=s[i]-s[size-i-1];
                if(x<0)
                {
                    x=-x;
                }
                count=count+x;
            }
        }
        if(count<=n)
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