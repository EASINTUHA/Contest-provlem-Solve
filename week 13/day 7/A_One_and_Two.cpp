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
        vector<int> v(n);
        int count=0;
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==2)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<1<<endl;
        }
        else if(count%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            count=count/2;
            int x=0;
            for(int i=0;i<n;i++)
            {
                if(v[i]==2)
                {
                    x++;
                }
                if(x==count)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}