#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int result=0;
        if(a>b)
        {
            result=a*b;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                result=result+min(v[i]*a,b);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}