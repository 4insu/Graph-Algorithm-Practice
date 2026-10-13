#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n);
    vector<ll> inDeg(n, 0);

    for (ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        inDeg[b - 1]++;
    }

    queue<ll> q;
    for (ll i = 0; i < n; i++) {
        if (inDeg[i] == 0) {q.push(i);}
    }

    vector<ll> dp(n, 0); dp[0] = 1;

    while (!q.empty()) {
        ll curr = q.front(); q.pop();

        for (auto &x : adj[curr]) {
            dp[x] = (dp[x] + dp[curr]) % MOD;
            inDeg[x]--;
            if (inDeg[x] == 0) {q.push(x);}
        }
    }

    cout << dp[n - 1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
