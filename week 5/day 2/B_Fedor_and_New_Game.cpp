#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    vector<int> v(b+1);
    for (int i=0;i<b;i++)
    {
        cin>>v[i];
    }
    int p;
    cin>>p;
    int count=0;
    for (int i=0;i<b;i++)
    {
        int res=v[i]^p;
        int x=0;
        while(res != 0)
        {
            res=res&(res-1);
            x++;
        }
        if(x<=c)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
