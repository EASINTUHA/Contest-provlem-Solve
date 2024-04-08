#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int match = 0;
        int unmatch = 0;
        int i=0,j=n-1;
        for (i=0,j=n-1;i<j;i++)
        {
            if (s[i] == s[j])
                match += 2;
            else
                unmatch++;
            j--;
        }
        vector<char> v2;
        for (int i=0;i<=n;i++)
        {
            int total=i-unmatch;
            if (total<0)
            {
                v2.push_back('0');
                continue;
            }
            total=max((total % 2),total - match);
            total=max(0,total-(n % 2));
            if(total==0)
            {
                v2.push_back('1');
            }
            else
            {
                v2.push_back('0');
            }
        }

        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i];
        }
        cout<<endl;
    }
    return 0;
}
