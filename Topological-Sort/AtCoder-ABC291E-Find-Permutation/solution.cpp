#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n);
    vector<ll> inDeg(n, 0);

    for(ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        inDeg[v - 1]++;
    }

    queue<ll> q;
    vector<ll> topoArr;

    for (ll i = 0; i < n; i++) {
        if (inDeg[i] == 0) q.push(i);
    }

    while (!q.empty()) {
        if (q.size() > 1) {cout << "No\n"; return;}

        ll curr = q.front(); q.pop();
        topoArr.push_back(curr);

        for (auto &x : adj[curr]) {
            if (--inDeg[x] == 0) {q.push(x);}
        }
    }

    if (topoArr.size() != n) {cout << "No\n";}
    else {
        vector<ll> res(n);
        for (ll i = 0; i < n; i++) {res[topoArr[i]] = i + 1;}

        cout << "Yes\n";
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
