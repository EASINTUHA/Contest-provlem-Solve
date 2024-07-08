#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define tc int tests;cin>>tests;while(tests--)
#define fr(start,end) for(int x=start;x<=end;x++)
#define rfr(end,start) for(int x=end;x>=start;x--)
#define vi vector<int>
#define vb vector<bool>
#define print(variable) cout<<variable<<endl;

int maxSubArraySum(vi& a, int index){
    int max_so_far = INT_MIN, max_ending_here = 0;
    int size = a.size();

    for (int i = index; i < size; i+=2) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

void printarr(vector<int>& arr){
	int n=arr.size();
	// cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;
}

signed main(){
	tc{
		int n;cin>>n; 
		vi per(n+1,0);
		vi mx(n+1,0);
		vi beauty(n+1,0);
		int ma = 0,ans = 0;
		fr(1,n){
		    cin>>per[x];
		    ma = max(ma,per[x]);
		    if(ma<=x){
		        beauty[x]= -1;
		        ans++;
		    }
		    mx[x] = ma;
		}
		fr(1,n-1){
		    if(mx[x-1]<=x && per[x+1]<=x) beauty[x] = 1;
		}
		int ts = max(maxSubArraySum(beauty,1),0*1LL);
		ts = max(ts,maxSubArraySum(beauty,2));
		print(ans+ts);
	}
	return 0;
}
