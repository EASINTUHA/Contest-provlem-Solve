#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int i,int j,int k,const vector<int>& v,vector<vector<int>>& memo) 
    {
        if(i>=j) 
        {
            return 0;
        }
        if(memo[i][k] !=-1) 
        {
            return memo[i][k];
        }
        if (v[i]==0 && v[i-1]==1) 
        {
            return memo[i][k]=1+solve(i+1,j,k,v,memo);
        }
        else if (k==1 && v[i-1]==0 && v[i]==1)
        {
            return memo[i][k]=1+solve(i+1,j,k,v,memo);
        }
        else if (k==0 && v[i-1]==0 && v[i]==1)
        {
            return memo[i][k]=solve(i+1,j,1,v,memo);
        }
        else
        {
            return memo[i][k]=min(solve(i+1,j,k,v,memo),1+solve(i+1,j,k,v,memo));
        }
    }
    int so(string s,int n)
    {
        vector<int>v(n,0);
        for (int i=0;i<n;i++)
        {
            v[i]=s[i]-'0';
        }
        vector<vector<int>>memo(n,vector<int>(2,-1));
        return 1+solve(1,n,0,v,memo);
    }
};
int main()
{
    int t;
    cin>>t;
    Solution sol;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int ans=sol.so(s,n);
        cout<<ans<<endl;
    }
    return 0;
}
