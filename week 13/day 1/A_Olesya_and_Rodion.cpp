#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n >> t;
    string s;
    if (t == 10)
    {
        if(n==1)
        {
            cout<<-1<<endl;
            return 0;
        }
        s += '1';
        for (int i = 0; i < n - 1; i++)
        {
            s += '0';
        }
    }
    else
    {
        char c=t+'0';
        for (int i = 0; i < n; i++)
        {
            s += c;
        }
    }
    cout << s << endl;
    return 0;
}