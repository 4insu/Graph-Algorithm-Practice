#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void utilityDFS1(ll src, vector<vector<ll>>& adj, vector<bool>& visited, vector<ll>& stk) {
    visited[src] = true;
    for (auto &x : adj[src]) {
        if (!visited[x]) {
            utilityDFS1(x, adj, visited, stk);
        }
    }
    stk.push_back(src);
}

void utilityDFS2(ll src, vector<vector<ll>>& adj, vector<bool>& visited, vector<ll>& comp, ll c) {
    visited[src] = true;
    comp[src] = c;
    for (auto &x : adj[src]) {
        if (!visited[x]) {
            utilityDFS2(x, adj, visited, comp, c);
        }
    }
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> coins(n); for (ll i = 0; i < n; i++) {cin >> coins[i];}
    vector<vector<ll>> adj(n), adjR(n);
    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adjR[v - 1].push_back(u - 1);
    }

    vector<bool> visited(n, false);
    vector<ll> stk;
    for (ll i = 0; i < n; i++) {
        if (!visited[i]) {
            utilityDFS1(i, adj, visited, stk);
        }
    }

    visited.assign(n, false);
    vector<ll> comp(n);
    ll c = 0;

    for (ll i = n - 1; i >= 0; i--) {
        if (!visited[stk[i]]) {
            utilityDFS2(stk[i], adjR, visited, comp, c);
            c++;
        }
    }

    vector<vector<ll>> sccD(c);
    vector<ll> newC(c, 0);
    vector<ll> inDeg(c, 0);

    for (ll i = 0; i < n; i++) {
        newC[comp[i]] += coins[i];
        for (auto &x : adj[i]) {
            if (comp[i] != comp[x]) {
                sccD[comp[i]].push_back(comp[x]);
                inDeg[comp[x]]++;
            }
        }
    }

    ll ans = 0;
    vector<ll> dp(newC);
    queue<ll> q; for (ll i = 0; i < c; i++) {if (inDeg[i] == 0) q.push(i);}

    while (!q.empty()) {
        ll curr = q.front(); q.pop();
        ans = max(ans, dp[curr]);

        for (auto &x : sccD[curr]) {
            dp[x] = max(dp[x], newC[x] + dp[curr]);
            if (--inDeg[x] == 0) {q.push(x);}
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
