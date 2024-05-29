#include <bits/stdc++.h>
using namespace std;
map<long long int, long long int> freq;
int main()
{
    long long n,x,sum=0;
    vector<int> v;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        freq[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        x=0;
        if (freq[a[i]])
        {
            x=1;
        }
        freq[a[i]]--;
        long long int ressum=sum-a[i];
        if (ressum%2==0 && freq[ressum/2]>0)
        {
            v.push_back(i + 1);
        }
        if (x)
        {
            freq[a[i]]++;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
