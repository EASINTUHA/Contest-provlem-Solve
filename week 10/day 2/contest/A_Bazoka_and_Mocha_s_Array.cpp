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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int> v1=v;
        v.insert(v.end(),v1.begin(),v1.end());
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            bool x=true;
            for(int j=1;j<n;j++)
            {
                if(v[i+j-1] > v[i+j])
                {
                    x= false;
                    break;
                }
            }
            if(x){
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
