#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i^j)==n)
                {
                    cout<<n<<i<<" "<<j<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
    }
    return 0;
}