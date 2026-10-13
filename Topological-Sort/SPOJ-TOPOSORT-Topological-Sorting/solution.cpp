#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m; cin >> n >> m;

    vector<vector<ll>> adj(n);
    vector<ll> inDeg(n, 0);

    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        inDeg[v - 1]++;
    }

    priority_queue<ll, vector<ll>, greater<ll>> q;
    for (ll i = 0; i < n; i++) {
        if (inDeg[i] == 0) {
            q.push(i);
        }
    }

    vector<ll> res;

    while (!q.empty()) {
        ll curr = q.top(); q.pop();
        res.push_back(curr);

        for (auto &x : adj[curr]) {
            inDeg[x]--;
            if (inDeg[x] == 0) {q.push(x);}
        }
    }

    if (res.size() != n) {cout << "Sandro fails.\n";}
    else {
        for (auto &x : res) {cout << x + 1 << " ";}
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
