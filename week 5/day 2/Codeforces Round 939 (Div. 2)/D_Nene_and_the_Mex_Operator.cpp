#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<pair<int,int>> operation;
    int sum=0;
    for(int len=1;len<=n;len++)
    {
        for(int start=0;start<=n-len;start++)
        {
            vector<int> subarray(v.begin()+start,v.begin()+start+len);
            sort(subarray.begin(),subarray.end());
            int mex=0;
            for(int i=0;i<len;i++)
            {
                if(subarray[i]==mex)
                {
                    mex++;
                }
                else
                {
                    break;
                }
            }
            for(int i=start;i<start+len;i++)
            {
                if(v[i]!=mex)
                {
                    sum=sum+mex-v[i];
                    v[i]=mex;
                    operation.push_back({i+1,i+1});
                }
            }
        }
    }
    cout<<sum<<" "<<operation.size()<<endl;
    for(auto op:operation)
    {
        cout<<op.first<<" "<<op.second<<endl;
    }
    return 0;
}