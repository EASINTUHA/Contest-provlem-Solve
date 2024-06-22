class Solution {
public:
    int minimumOperations(vector<int>& nums)
    {
        int x = 0;
        for(int num : nums)
        {
            int p=num%3;
            if(p==1)
            {
                x++;
            }
            else if(p==2)
            {
                x++;
            }
        }
        return x;
    }
};