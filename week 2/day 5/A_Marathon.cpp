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
        int n,x,count=0;
        cin>>n;
        for(int i=0;i<3;i++)
        {
            cin>>x;
            if(x>n)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}