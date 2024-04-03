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
        map<string,int> mp;
        vector<string> v[3];
        for(int i=0;i<3;i++)
        {
            v[i].resize(n);
            for(int j=0;j<n;j++)
            {
                cin>>v[i][j];
                mp[v[i][j]]++;
            }
        }
        int arr[3]={0};
        for(int i=0;i<3;i++)
        {
            for(int j= 0;j<n;j++)
            {
                if(mp[v[i][j]] == 1)
                {
                    arr[i]=arr[i]+3;
                }
                else if(mp[v[i][j]] == 2)
                {
                    arr[i]=arr[i]+1;
                }
            }
        }
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
    return 0;
}
