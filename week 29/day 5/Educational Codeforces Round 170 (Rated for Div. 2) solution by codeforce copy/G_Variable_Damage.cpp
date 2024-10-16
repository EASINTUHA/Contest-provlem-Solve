//cpopy from Educational Codeforces Round 170 (Rated for Div. 2) solution
#include <bits/stdc++.h>
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
using namespace std;
 
struct query{
	int t, v;
};
 
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int m;
	cin >> m;
	vector<query> q(m);
	forn(i, m) cin >> q[i].t >> q[i].v;
	
	vector<pair<int, int>> xs;
	forn(i, m) xs.push_back({q[i].v, i});
	sort(xs.rbegin(), xs.rend());
	forn(i, m) q[i].v = xs.rend() - lower_bound(xs.rbegin(), xs.rend(), make_pair(q[i].v, i)) - 1;
	
	const int p = sqrt(m + 10);
	const int siz = (m + p - 1) / p;
	
	vector<int> tp(m);
	vector<int> val(m);
	vector<vector<long long>> dp(p, vector<long long>(2 * siz + 1));
	vector<int> blbal(p);
	
	auto upd = [&](const query &q){
		tp[q.v] = q.t;
		val[q.v] = xs[q.v].first;
		blbal[q.v / siz] += q.t == 1 ? 1 : -1;
	};
	
	auto recalc = [&](int b){
		dp[b].assign(2 * siz + 1, 0);
		int bal = 0;
		for (int i = b * siz; i < m && i < (b + 1) * siz; ++i){
			if (tp[i] == 1){
				dp[b][0] += val[i];
				dp[b][0] += val[i];
				dp[b][-bal + siz] -= val[i];
				++bal;
			}
			else if (tp[i] == 2){
				dp[b][-bal + 1 + siz] += val[i];
				--bal;
			}
		}
		forn(i, 2 * siz){
			dp[b][i + 1] += dp[b][i];
		}
	};
	
	auto get = [&](int b, int bal){
		bal += siz;
		if (bal < 0) return dp[b][0];
		if (bal >= 2 * siz + 1) return dp[b].back();
		return dp[b][bal];
	};
	
	for (auto it : q){
		upd(it);
		recalc(it.v / siz);
		int bal = 0;
		long long ans = 0;
		for (int i = 0; i * siz < m; ++i){
			ans += get(i, bal);
			bal += blbal[i];
		}
		cout << ans << '\n';
	}
	
	return 0;
}