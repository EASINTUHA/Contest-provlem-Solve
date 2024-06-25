class Solution {
public:
    int searcmnsert(vector<int>& nums, int target) {
        int n=0,m =nums.size()-1;
        int mid=n+(m-n)/2;
        while(n<=m)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                m=mid-1;
            }
            else
            {
                n=mid+1;
            }
            mid=n+(m-n)/2;
        }
        return n;
    }
};