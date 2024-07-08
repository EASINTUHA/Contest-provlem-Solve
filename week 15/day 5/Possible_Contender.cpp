#include<bits/stdc++.h>
using namespace std;

#define int long long

int mod = 1e9+7;
int mod2 = 998244353;

int32_t main()
{
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector<int> a(n); for(int &i:a) cin>>i;
        vector<int> b = a;
        sort(b.begin(),b.end());
        b.erase(unique(b.begin(),b.end()),b.end());
        for(int &i:a) i = upper_bound(b.begin(),b.end(),i)-b.begin();
        int l = 1, r = b.size();
        while(l<r){
            int m = (l+r+1)/2;
            int more = 0, less = 0;
            bool lastless = false;
            for(int i=0;i<n;++i){
                if(a[i]>=m){
                    more++;
                    lastless = false;
                }
                else{
                    if(!lastless) less++;
                    lastless = true;
                }
            }
            if(more>less) l=m;
            else r = m-1;
        }
        for(auto i:a){
            if(i>l) cout<<'0';
            else cout<<'1';
        }
        cout<<'\n';
    }
}