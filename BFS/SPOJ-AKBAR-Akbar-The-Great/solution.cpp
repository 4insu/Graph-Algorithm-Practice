#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, r, m; cin >> n >> r >> m;
    vector<vector<ll>> adj(n);
    vector<ll> visited(n, -1);

    for (ll i = 0; i < r; i++) {
        ll a, b; cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }

    bool conflict = false;

    for (ll i = 0; i < m; i++) {
        ll k, s; cin >> k >> s;

        if (conflict) continue;
        if (visited[k - 1] != -1) {conflict = true; continue;}

        queue<pair<ll, ll>> q; q.push({k - 1, 0}); visited[k - 1] = i;

        while (!q.empty()) {
            auto [curr, dst] = q.front(); q.pop();
            if (dst == s) continue;
            for (auto &x : adj[curr]) {
                if (visited[x] == i) continue;
                if (visited[x] != -1) {conflict = true; break;}
                q.push({x, dst + 1});
                visited[x] = i;
            }
            if (conflict) break;
        }
    }

    for (ll i = 0; i < n && !conflict; i++) {
        if (visited[i] == -1) {
            conflict = true;
            break;
        }
    }

    cout << (conflict ? "No\n" : "Yes\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
