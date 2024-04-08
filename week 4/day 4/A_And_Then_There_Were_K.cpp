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
        int x=pow(2,floor(log2(n)));
        cout <<x-1<< endl;
    }
    return 0;
}
/*
1. 2^1=2-1=1
2. 2^2=4-1=3
3. 2^4=16-1=15
*/

/*
Tle
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
        int x=n;
        for(int i=n;i>0;i--)
        {
            int p=x&i;
            x=p;
            if(p==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}



*/