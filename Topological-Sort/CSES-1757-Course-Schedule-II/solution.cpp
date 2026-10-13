#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n);
    vector<ll> inDeg(n, 0);

    for (ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adj[b - 1].push_back(a - 1);
        inDeg[a - 1]++;
    }

    priority_queue<ll> pq;

    for (ll i = 0; i < n; i++) {
        if (inDeg[i] == 0) {pq.push(i);}
    }

    vector<ll> res;

    while (!pq.empty()) {
        ll curr = pq.top(); pq.pop();
        res.push_back(curr);

        for (auto &x : adj[curr]) {
            inDeg[x]--;
            if (inDeg[x] == 0) {pq.push(x);}
        }
    }

    reverse(res.begin(), res.end());

    for (auto &x : res) {cout << x + 1 << " ";}
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
