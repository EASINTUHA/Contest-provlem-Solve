#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=1000;i++)
    {
        int r,x;
        x=i;
        bool lucky=true;
        while(x>0)
        {
            r=x%10;
            x=x/10;
            if(r != 4 && r != 7)
            {
                lucky=false;
                break;
            }
        }
        if(lucky && n%i==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}