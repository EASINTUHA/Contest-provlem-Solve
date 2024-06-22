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
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(i%2==0 && x%2!=0)
            {
                b++;
            }
            else if(i%2!=0 && x%2==0)
            {
                a++;
            }
        }
        if(a!=b)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}