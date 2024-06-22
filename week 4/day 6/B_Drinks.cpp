#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum=sum+x;
    }
    double avg=sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;
    return 0;
}