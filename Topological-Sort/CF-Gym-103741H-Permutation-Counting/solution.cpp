#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 998244353;

ll utilityDFS(ll src, vector<vector<ll>>& adj, vector<ll>& dp, vector<bool>& visited, vector<bool>& pathVisited, bool& hasCycle) {
    if (pathVisited[src]) {hasCycle = true; return 0;}
    if (visited[src]) return dp[src];

    visited[src] = true;
    pathVisited[src] = true;

    dp[src] = 1;
    for (auto &x : adj[src]) {dp[src] += utilityDFS(x, adj, dp, visited, pathVisited, hasCycle);}

    pathVisited[src] = false;
    return dp[src];
}

ll binaryExp(ll a, ll b) {
    ll res = 1;

    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

void solve() {
    ll n, m; cin >> n >> m;

    vector<vector<ll>> adj(n);
    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[v - 1].push_back(u - 1);
    }

    bool hasCycle = false;
    vector<ll> dp(n, -1);
    vector<bool> visited(n, false);
    vector<bool> pathVisited(n, false);

    for (ll i = 0; i < n; i++) {
        if (!visited[i]) {
            utilityDFS(i, adj, dp, visited, pathVisited, hasCycle);
        }
    }

    if (hasCycle) {cout << "0\n";}
    else {
        ll res = 1, deno = 1;
        for (ll i = 2; i <= n; i++) {res = res * i % MOD;}
        for (ll i = 0; i < n; i++) {deno = deno * dp[i] % MOD;}

        res = res * binaryExp(deno, MOD - 2) % MOD;

        cout << res << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
