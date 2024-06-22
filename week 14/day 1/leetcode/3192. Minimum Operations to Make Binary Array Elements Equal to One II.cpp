class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        bool flipped=false;
        for (int i = 0; i < n; ++i)
        {
            int actual_value = nums[i] ^ (flipped ? 1 : 0);
            if (actual_value == 0) {
                flipped = !flipped;
                count++;
            }
        }
        return count;
    }
};