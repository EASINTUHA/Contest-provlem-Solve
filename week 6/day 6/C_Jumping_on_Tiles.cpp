#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int size=s.size();
        char mn=min(s[0],s[size-1]);
        char mx=max(s[0],s[size-1]);
        map<char, vector<int>> mp;
        for (int i=0; i<size; ++i)
        {
            if (s[i] >=mn && s[i] <=mx)
            {
                mp[s[i]].push_back(i + 1);
            }
        }
        vector<int> v;
        long long moves=0;
        char ch=0;
        bool reverseOrder=s[0] > s[size - 1];
        if (reverseOrder)
        {
            for (auto it=mp.rbegin(); it !=mp.rend(); ++it)
            {
                char cr=it->first;
                const vector<int> &inds=it->second;
                if (ch !=0)
                {
                    moves +=abs(ch - cr);
                }
                v.insert(v.end(),inds.begin(),inds.end());
                ch=cr;
            }
        }
        else
        {
            for (auto it=mp.begin(); it !=mp.end(); ++it)
            {
                char cr=it->first;
                const vector<int> &inds=it->second;
                if (ch !=0)
                {
                    moves +=abs(ch - cr);
                }
                v.insert(v.end(), inds.begin(), inds.end());
                ch=cr;
            }
        }
        cout<<moves<<" "<<v.size()<<endl;
        for (int index:v)
        {
            cout<<index<<" ";
        }
        cout << endl;
    }
    return 0;
}