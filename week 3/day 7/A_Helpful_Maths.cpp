#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,temp;
    string s;
    cin>>s;
    for(i=0;i<s.length();i+=2)
    { 
        for(j=i+2;j<s.length();j=j+2)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}