#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;

const ll LINF = 1e18;

void solve() {
    ll n, e, t, m; cin >> n >> e >> t >> m;
    vector<vector<pll>> adj(n);

    for (ll i = 0; i < m; i++) {
        ll a, b, c; cin >> a >> b >> c;
        adj[b - 1].push_back({a - 1, c});
    }

    priority_queue<pll, vector<pll>, greater<pll>> pq; pq.push({0, e - 1});
    vector<ll> distance(n, LINF); distance[e - 1] = 0;

    while (!pq.empty()) {
        auto [dst, node] = pq.top(); pq.pop();

        if (dst > distance[node]) continue;

        for (auto &[n, d] : adj[node]) {
            if (dst + d < distance[n]) {
                distance[n] = dst + d;
                pq.push({distance[n], n});
            }
        }
    }

    ll count = 0;
    for (auto &x: distance) {if (x <= t) count++;}
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
