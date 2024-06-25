#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int hand25=0;
    int hand50=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==25)
            hand25++;
        else if(v[i]==50)
        {
            hand50++;
            hand25--;
            if(hand25<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if(v[i]==100)
        {
            if(hand50)
            {
                hand50--;
                hand25--;
            }
            else
                hand25-=3;
            if(hand25<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}