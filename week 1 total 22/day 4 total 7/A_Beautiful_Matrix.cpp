#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                count=abs(2-i)+abs(2-j);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}