class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        if(n==0)
        {
            return true;
        }
        bool allCaps=true,allLower=true,firstCapRestLower=true;
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
            {
                allLower=false;
                if(i>0)
                {
                    firstCapRestLower=false;
                }
            }
            else
            {
                allCaps=false;
            }
        }
        return allCaps || allLower || firstCapRestLower;
    }
};