#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class DisjointSet {
private:
    vector<ll> parent;
    vector<ll> size;

public:
    DisjointSet(int n) {
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (ll i = 0; i <= n; i++) {parent[i] = i;}
    }

    ll superParent(ll node) {
        if (node == parent[node]) return node;
        return parent[node] = superParent(parent[node]);
    }

    bool inSameComponent(ll u, ll v) {
        return superParent(u) == superParent(v);
    }

    void unionBySize(ll u, ll v) {
        ll pu = superParent(u);
        ll pv = superParent(v);

        if (pu == pv) return;
        if (size[pu] < size[pv]) {parent[pu] = pv; size[pv] += size[pu];}
        else {parent[pv] = pu; size[pu] += size[pv];}
    }
};

void solve() {
    ll n, m; cin >> n >> m;
    DisjointSet ds(n);

    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        ds.unionBySize(u, v);
    }

    vector<ll> res;
    for (ll i = 1; i <= n; i++) {
        if (ds.superParent(i) == i) res.push_back(i);
    }

    cout << res.size() - 1 << "\n";
    for (ll i = 0; i < res.size() - 1; i++) {
        cout << res[i] << " " << res[i + 1] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
