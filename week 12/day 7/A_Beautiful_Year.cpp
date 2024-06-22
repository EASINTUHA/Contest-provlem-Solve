#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool flag= true;
    while(flag)
    {
        n++;
        vector<int> v;
        int temp=n;
        while(temp>0)
        {
            int r;
            r=temp%10;
            temp=temp/10;
            v.push_back(r);
        }
        bool same=false;
        for(int i=0;i<v.size()-1;i++)
        {
            if (same)
            {
                break;
            }
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]==v[j])
                {
                    same=true;
                    break;
                }
            }
        }
        if (!same)
        {
            flag =false;
        }
    }
    cout<<n<<endl;
    return 0;
}