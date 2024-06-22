class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>v;
        if(x<0)
        {
            return false;
        }
        else if(x==0)
        {
            return true;
        }
        else
        {
            while(x>0)
            {
                int p=x%10;
                v.push_back(p);
                x=x/10;
            }
            int n=v.size();
            for(int i=0;i<n/2;i++)
            {
                if(v[i] != v[n-i-1])
                {
                    return false;
                }
            }
            return true;
        }
    }
};