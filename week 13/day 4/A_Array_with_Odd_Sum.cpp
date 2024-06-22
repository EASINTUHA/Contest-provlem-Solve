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
        int count=0,count1=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==1)
            {
                count++;
            }
            else
            {
                count1++;
            }
        }
        if(count==0)
        {
            cout<<"NO"<<endl;
        }
        else if(count1==0 && n%2==0)
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