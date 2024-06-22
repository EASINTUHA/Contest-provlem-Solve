#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()==1)
        cout<<"NO"<<endl;
    else
    {
        auto it=++s.begin();
        cout<<*it<<endl;
    }
    return 0;
}