#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n + 1);
	for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
	vector<vector<int>> v2(n+2,vector<int>(n + 2));
	for (int i=n;i>=1;i--)
    {
		for (int j=i;j<=n;j++)
        {
			if (i==j)
            {
                v2[i][j]=1;
                continue;
            }
			v2[i][j]=1+v2[i+1][j];
			if (v[i]==v[i+1])
                v2[i][j]=min(v2[i][j],1+v2[i+2][j]);
			for (int k=i + 2;k<=j;k++)
            {
				if (v[i]==v[k])
                {
					v2[i][j]=min(v2[i][j],v2[i+1][k-1]+v2[k+1][j]);
				}
			}
		}
	}
	cout<<v2[1][n];
	return 0;
}