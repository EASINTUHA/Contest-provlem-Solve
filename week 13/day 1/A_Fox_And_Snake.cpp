#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(a%2==0)
            {
                for(int j=1;j<=m;j++)
                {
                    if(j !=m)
                    {
                        cout<<".";
                    }
                    else
                    {
                        cout<<"#";
                    }
                }
            }
            else
            {
                for(int j=0;j<m;j++)
                {
                    if(j !=0)
                    {
                        cout<<".";
                    }
                    else
                    {
                        cout<<"#";
                    }
                }
            }
            a++;
            cout<<endl;
        }
    }
    return 0;
}