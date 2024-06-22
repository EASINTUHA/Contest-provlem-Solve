#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int count=0;
    for(int i=0;i<n;i++)
    {
        string S;
        cin>>S;
        if(S=="Takahashi")
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}