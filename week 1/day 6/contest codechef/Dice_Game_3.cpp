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
        int score=0;
        if(n%2==0)
        {
            score=13*(n/2);
        }
        else
        {
            score=13*((n-1)/2)+6;
        }
        cout<<score<<endl;
    }
    return 0;
}