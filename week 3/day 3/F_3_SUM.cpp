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
        cin >> n;
        vector<int> v(n);
        int a[10] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            int x=v[i] % 10;
            a[x]++;
        }
        vector<int>v1;
        for(int i=0;i<10;i++){
            int x = a[i];
            if(x>3){
                x = 3;
    
            }
            while(x--){
                v1.push_back(i);
            }
        }
        bool flag=false;
        int m = v1.size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                for(int k=j+1;k<m;k++){
                    int sum = v1[i] + v1[j] + v1[k];
                    if(sum%10 == 3)
                    {
                        flag=true;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}