#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        int mn=INT_MAX;
        map<int,int> mp;
        bool flag=true;
        for (int i=0;i<n*n;i++)
        {
            int x;
            cin>>x;
            mn=min(mn,x);
            mp[x]++;
        }
        int first=mn,row_move;
        for(int i=0;i<n;i++)
        {
            first=mn+i*c;
            row_move=first;
            if(!mp[row_move])
            {
                flag=false;
                break;
            }
            for (int j = 0; j < n; j++)
            {
                row_move=first+j*d;
                if(!mp[row_move])
                {
                    flag=false;
                    break;
                }
                mp[row_move]--;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

