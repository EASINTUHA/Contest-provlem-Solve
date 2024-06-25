class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int x= 0;
        for(int i = 0, j = 0; j < s.size(); j++)
        {
            mp[s[j]]++;
            while(mp[s[j]] > 1)
            {
                mp[s[i++]]--;
            }
            x=max(x,j-i+1);
        }
        return x;
    }
};