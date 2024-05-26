#include<bits/stdc++.h>
using namespace std;
#define long long int int;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<pair<int,int>,int> mp1;
        map<pair<int,int>,int> mp2;
        map<pair<int,int>,int> mp3;
        map<tuple<int,int,int>,int> v1;
        map<tuple<int,int,int>,int> v2;
        map<tuple<int,int,int>,int> v3;
        int ans=0;
        for (int i=0;i<n-2;i++) 
        {
            int a=v[i];
            int b=v[i+1];
            int c=v[i+2];
            mp1[{a,b}]+=1;
            mp2[{b,c}]+=1;
            mp3[{a,c}]+=1;
            tuple<int,int,int> triple=make_tuple(a,b,c);
            v1[triple]+=1;
            v2[triple]+=1;
            v3[triple]+=1;
            ans=ans+mp1[{a, b}]-v1[triple]+mp2[{b,c}]-v2[triple]+mp3[{a, c}]-v3[triple];
        }
        cout<<ans<<endl;
    }
    return 0;
}
