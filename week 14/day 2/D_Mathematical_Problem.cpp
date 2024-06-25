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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2)
        {
            if(s[0]=='0')
            {
                cout<<s[1]<<endl;
            }
            else
            {
                cout<<s<<endl;
            }
        }
        else
        {
            int flag=false;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                {
                    flag=true;
                }
            }
            long long int total=LONG_MAX;
            if(flag && n>=4)
            {
                {
                    cout << 0 << endl;
                }
            }
            else if(flag)
            {
                if(s[1]=='0')
                {
                    cout<<min((s[0]-'0')+(s[2]-'0'),(s[0]-'0')*(s[2]-'0'))<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
                continue;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    vector<int> v;
                    for(int j=0;j<n;j++)
                    {
                        if(j!=i)
                        {
                            string s1="";
                            s1=s1+s[j];
                            v.push_back(stoi(s1));
                        }
                        else
                        {
                            string s1="";
                            s1=s1+s[j]+s[j+1];
                            j++;
                            v.push_back(stoi(s1));
                        }
                    }
                    long long int x=v[0];
                    if(x==1)
                    {
                        x=0;
                    }
                    for(int i=1;i<v.size();i++)
                    {
                        if(v[i]!=1)
                        {
                            x=x+v[i];
                        }
                    }
                    total=min(total,x);
                }
                cout<<total<<endl;
            }
        }
    }
    return 0;
}