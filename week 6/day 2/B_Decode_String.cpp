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
        string s;
        cin>>s;
        vector<char> v;
        for (int i=0;i<n;i++)
        {
            int num=s[i]-'0';
            if (i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3] != '0'))
            {
                num=num*10+(s[i+1]-'0');
                i=i+2;
            }
            v.push_back(static_cast<char>(96+num));
        }
        for (char c:v)
        {
            cout<<c;
        }
        cout << endl;
    }
    return 0;
}

