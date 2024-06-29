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
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<"196" + string(n-3,'0')<<endl;
            for(int x = 0; x*2+3<=n; ++x)
            {
                cout<<"1"+string(x,'0')+"6"+string(x,'0')+"9"+string(n-(x*2+3),'0')<<endl;
                cout<<"9"+string(x,'0')+"6"+string(x,'0')+"1"+string(n-(x*2+3),'0')<<endl;
            }
        }
    }
    return 0;
}