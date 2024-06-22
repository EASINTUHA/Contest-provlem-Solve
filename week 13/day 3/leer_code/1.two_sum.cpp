//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) 
    {
        int n=v.size();
        int x,y;
        vector<int>v1(2);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]+v[j]==target)
                {
                    v1[0]=i;
                    v1[1]=j;
                    break;
                }
            }
        }
        return v1;
    }

};