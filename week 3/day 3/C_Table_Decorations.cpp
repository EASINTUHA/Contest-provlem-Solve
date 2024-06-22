#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long int>v(3);
	for(int i=0;i<3;i++)
	{
        cin>>v[i];
    }
	sort(v.begin(),v.end());
    long long int p=v[0]+v[1];
    long long int q=(v[0]+v[1]+v[2])/3;
    long long int x=min(p,q);
	cout<<x<<endl;
    return 0;
}