#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll NLINF = -1e18;

void solve() {
    ll n, m; cin >> n >> m;

    vector<vector<ll>> adj(n);
    vector<ll> inDeg(n, 0);

    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        inDeg[v - 1]++;
    }

    queue<ll> q;
    for (ll i = 0; i < n; i++) {
        if (inDeg[i] == 0) {
            q.push(i);
        }
    }

    vector<ll> dst(n, NLINF); dst[0] = 0;
    vector<ll> par(n, -1);

    while (!q.empty()) {
        ll curr = q.front(); q.pop();

        for (auto &x : adj[curr]) {
            if (dst[curr] != NLINF && dst[curr] + 1 > dst[x]) {
                dst[x] = dst[curr] + 1;
                par[x] = curr;
            }
            inDeg[x]--;
            if (inDeg[x] == 0) {q.push(x);}
        }
    }

    if (dst[n - 1] == NLINF) {cout << "IMPOSSIBLE";}
    else {
        cout << dst[n - 1] + 1 << "\n";
        vector<ll> res;
        ll v = n - 1;
        while (v != -1) {
            res.push_back(v + 1);
            v = par[v];
        }
        reverse(res.begin(), res.end());
        for (auto &x : res) {cout << x << " ";}
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
