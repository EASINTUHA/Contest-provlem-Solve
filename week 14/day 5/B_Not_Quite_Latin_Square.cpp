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
        vector<int> v(3,0);
        for(int i=0;i<3;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<3;j++)
            {
                if(s[j]=='?')
                {
                    continue;
                }
                else
                {
                    v[s[j]-'A']++;
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            if(v[i]<3)
            {
                cout<<char(i+'A')<<endl;
                break;
            }
        }
    }
    return 0;
}