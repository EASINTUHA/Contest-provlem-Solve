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
		long long pos=0,neg=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
		for(int i=0;i<n;i++)
        {
			if(v[i]>=0)
            {
                pos+=v[i];
            }
			else
            {
				if(pos+v[i]>=0)
                {
                    pos+=v[i];
                }
				else
                {
					v[i]+=pos;
					pos=0;
					neg+=v[i];
				}
			}
		}
		cout<<-neg<<endl;
    }
    return 0;
}
