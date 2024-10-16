//cpopy from Educational Codeforces Round 170 (Rated for Div. 2)
#include <bits/stdc++.h>

using namespace std;

const int N = 300043;

string choice = "xy";
string sign = "+-";

int qs[N][2];
string ans[N];
int n, q;
vector<int> g[N];
int color[N];

void pair_queries(int q1, int q2)
{
    if (q1 > q2)
        swap(q1, q2);
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (qs[q1][i] == qs[q2][j])
            {
                ans[q1] = {choice[i], sign[0]};
                ans[q2] = {choice[j], sign[1]};
                return;
            }
}

bool dfs(int v, int pe = -1)
{
    color[v] = 1;
    vector<int> edge_nums;
    for (auto e : g[v])
    {
        int u = v ^ qs[e][0] ^ qs[e][1];
        if (color[u] == 1)
            continue;
        if (color[u] == 0)
        {
            if (dfs(u, e))
                edge_nums.push_back(e);
        }
        else
            edge_nums.push_back(e);
    }
    bool res = true;
    if (edge_nums.size() % 2 != 0)
    {
        if (pe != -1)
            edge_nums.push_back(pe);
        else
            edge_nums.pop_back();
        res = false;
    }
    for (int i = 0; i < edge_nums.size(); i += 2)
        pair_queries(edge_nums[i], edge_nums[i + 1]);
    color[v] = 2;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> qs[i][0] >> qs[i][1];
        --qs[i][0];
        --qs[i][1];
        g[qs[i][0]].push_back(i);
        g[qs[i][1]].push_back(i);
        ans[i] = "x+";
    }
    for (int i = 0; i < n; i++)
        if (color[i] == 0)
            dfs(i);
    for (int i = 0; i < q; i++)
        cout << ans[i] << endl;
}