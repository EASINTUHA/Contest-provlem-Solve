#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        cout<<"Friendship"<<endl;
    }
    else if(count1>count2)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    return 0;
}