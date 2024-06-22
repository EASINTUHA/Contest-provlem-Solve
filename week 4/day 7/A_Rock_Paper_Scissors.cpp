#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    string s1,s2;
    cin>>n>>s1>>s2;
    m=s1.size(), k=s2.size();
    int l=lcm(m,k);
    string s3 = s1;
    string s4 = s2;
    for(int i=0; i<=l/m; i++)
    {
        s3=s3+s1;
    }
    for(int i=0; i<=l/k; i++)
    {
        s4=s4+s2;
    }
    int p=n/l;
    int q=n%l;
    long long int count1=0,count2=0,ans1=0,ans2=0;
    for(int i=0; i<l && i<n; ++i)
    {
        char a=s3[i];
        char b=s4[i];
        if(a=='R')
        {
            if(b=='P')
            {
                count1++;
            }
            else if(b=='S')
            {
                count2++;
            }
        }
        else if(a=='P')
        {
            if(b=='R')
            {
                count2++;
            }
            else if(b=='S')
            {
                count1++;
            }
        }
        else if(a=='S')
        {
            if(b=='R')
            {
                count1++;
            }
            else if(b=='P')
            {
                count2++;
            }
        }
        if(i==q-1)
        {
            ans1=count1;
            ans2=count2;
        }
    }
    cout<<p*count1+ans1<<" "<<p*count2+ans2<<endl;
    return 0;
}