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
        long long int n;
        cin>>n;
        string s;
        while (n > 0) {
            s.push_back('0'+n%10);
            n=n/10;
        }
        reverse(s.begin(),s.end());
        if(s.find("01234") != string::npos && s.find("56789") != string::npos)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool flag=true;
        int sum=0;
        int x=35;
        for(int i=1;i<s.size();i++)
        {
            sum=sum+(s[i-1]-'0');
            if(s[i-1]=='0')
            {
                flag=false;
            }
        } 
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
        else if(s.back()=='9')
        {
            cout<<"NO"<<endl;
        }
        else if(sum==x)
        {
            cout<<"NO"<<endl;
        }
        else if(s[0] != '1')
        {
            cout<<"NO"<<endl;
        }
        else if(s.size()%10==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

