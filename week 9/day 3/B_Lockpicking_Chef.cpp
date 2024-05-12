#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s,k;
        cin>>s;
        cin>>k;
        int d=999;
        for (int i=0;i<=a-b;i++) {
            int ans=0;
            for (int j=0;j<k.length();j++)
            {
                int x=abs(int(s[i + j])-int(k[j]));
                if (x > 5)
                {
                    x=10-x;
                }
                ans=ans+x;
            }
            d=min(d, ans);
        }
        cout<<d<<endl;
    }
    return 0;
}