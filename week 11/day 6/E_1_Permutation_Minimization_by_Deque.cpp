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
        int n;
        deque<int> deqs;
        cin>>n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>deqs.front())
            {
                deqs.push_back(x);
                continue;
            }
            deqs.push_front(x);
        }
        for(int i=0;i<n;i++)
        {
            cout<<deqs.at(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}