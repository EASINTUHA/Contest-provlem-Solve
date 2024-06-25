#include<bits/stdc++.h>
using namespace std;
vector<int>sol(string &str)
{
	int n=str.size();
	vector<int>z(n);
	int l=0,r=0;
	for(int i=1;i<n;i++)
    {
		if(i<=r)
        {
            z[i]=min(r-i+1,z[i-l]);
        }
		while(i+z[i]<n&&str[z[i]]==str[i+z[i]])
        {
            z[i]++;
        }
		if(i+z[i]-1>r)
        {
			l=i;
			r=i+z[i]-1;
		}
	}
	return z;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        string s;
        cin>>n>>k>>k>>s;
        vector<int> z=sol(s);
        int low=1,high=n,ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int cnt=1;
            for(int i=mid;i<n;)
            {
                if(z[i] >= mid)
                {
                    cnt++;
                    i=i+mid;
                }
                else
                {
                    i++;
                }
            }
            if(cnt>=k)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}