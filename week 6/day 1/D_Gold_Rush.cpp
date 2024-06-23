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
        int n,m;
        cin>>n>>m;
        queue<int> q;
        q.push(n);
        bool flag=false;
        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            if(current==m)
            {
                flag=true;
                break;
            }
            if (current%3==0 && current>=m)
            {
                q.push(current/3);
                q.push(2*current/3);
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}