#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    for(int i=0;i<s1.size();i++)
    {
        count=tolower(s1[i])-tolower(s2[i]);
        if(count !=0)
        {
            break;
        }
    }
    if(count==0)
        cout<<count<<endl;
    else if(count>0)
        cout<<1<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
