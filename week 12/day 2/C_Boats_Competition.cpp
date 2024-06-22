#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mx=0;
        for(int i=2;i<=2*n;i++)
        {
            map<int, int> count;
            for (int weight : v)
            {
                count[weight]++;
            }
            int current=0;
            for (int weight:v)
            {
                if (count[weight]>0)
                {
                    int target=i-weight;
                    if (target>0 && count[target]>0)
                    {
                        if (weight==target && count[weight]<2)
                        {
                            continue;
                        }
                        count[weight]--;
                        count[target]--;
                        current++;
                    }
                }
            }
            mx= max(mx, current);
        }
        cout<<mx<<endl;
    }
    return 0;
}