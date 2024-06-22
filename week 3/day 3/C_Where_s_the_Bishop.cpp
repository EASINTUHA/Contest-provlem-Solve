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
        vector<string> v(8);
        for (int i = 0; i < 8; ++i)
        {
            cin >> v[i];
        }
        int x=0,y=0;
        for (int i=1;i<7;i++)
        {
            for (int j=1;j<7;j++)
            {
                if (v[i][j] == '#' && v[i-1][j-1] == '#' && v[i-1][j+1] == '#' && v[i+1][j-1] == '#' && v[i+1][j+1] == '#')
                {
                    x=i;
                    y=j;
                    break;
                }
            }
        }
        cout<<++x<<" "<<++y<<endl;
    }
    return 0;
}