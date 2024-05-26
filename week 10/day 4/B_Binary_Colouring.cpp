#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        vector<int> v;
        while(a != 0)
        {
            if(a%2==0)
            {
                v.push_back(0);
                a=a/2;
            }
            else
            {
                if(a%4==1)
                {
                    v.push_back(1);
                    a=(a-1)/2;
                }
                else
                {
                    v.push_back(-1);
                    a=(a+1)/2;
                }
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}