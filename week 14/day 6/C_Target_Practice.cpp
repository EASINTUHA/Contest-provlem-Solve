#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>v;
        for(int i=0;i<10;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        vector<int>shot;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(v[i][j]=='X')
                {
                    set<int>st;
                    st.insert(i);
                    st.insert(j);
                    st.insert(9-i);
                    st.insert(9-j);
                    auto it=*st.begin();
                    shot.push_back(it);
                }
            }
        }
        int points=0;
        for(auto x:shot)
        {
            points=points+x+1;
        }
        cout<<points<<endl;
    }
    return 0;
}