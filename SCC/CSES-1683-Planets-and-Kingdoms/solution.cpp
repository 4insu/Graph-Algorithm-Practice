#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void utilityDFS(ll src, vector<vector<ll>>& adj, vector<bool>& visited, vector<ll>& stk) {
    visited[src] = true;

    for (auto &x : adj[src]) {
        if (!visited[x]) {
            utilityDFS(x, adj, visited, stk);
        }
    }

    stk.push_back(src);
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n);
    vector<vector<ll>> adjR(n);

    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adjR[v - 1].push_back(u - 1);
    }

    vector<bool> visited(n, false);
    vector<ll> stk;

    for (ll i = 0; i < n; i++) {
        if (!visited[i]) {
            utilityDFS(i, adj, visited, stk);
        }
    }

    vector<vector<ll>> components;
    visited = vector<bool> (n, false);

    for (ll i = n - 1; i >= 0; i--) {
        if (!visited[stk[i]]) {
            vector<ll> component;
            utilityDFS(stk[i], adjR, visited, component);
            components.push_back(component);
        }
    }

    vector<ll> kingdoms(n);

    for (ll i = 0; i < components.size(); i++) {
        for (ll j = 0; j < components[i].size(); j++) {
            kingdoms[components[i][j]] = i + 1;
        }
    }

    cout << components.size() << "\n";
    for (auto &x : kingdoms) {cout << x << " ";}
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
