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
        string s;
        cin>>s;
        int n=s.size();
        for(int i=n-1;i>-1;i--)
        {
            if(s[i]>='5')
            {
                if(i-1<0)
                {    
                    s.insert(s.begin(),'1');
                    n=i+1;
                }
                else
                {
                    s[i-1]++;
                    n=i;
                }
            }
        }
        for(int i=n;i<s.size();i++)
        {
            s[i]='0';
        }
        cout<<s<<endl;
    }
    return 0;
}