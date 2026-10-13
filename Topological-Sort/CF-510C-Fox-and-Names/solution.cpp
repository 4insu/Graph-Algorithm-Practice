#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n; cin >> n;
    vector<string> words(n); for (ll i = 0; i < n; i++) {cin >> words[i];}
    vector<vector<ll>> adj(26);
    vector<ll> inDeg(26, 0);

    for (ll i = 0; i < n - 1; i++) {
        string a = words[i];
        string b = words[i + 1];

        bool isDiff = false;

        ll len = min(a.size(), b.size());

        for (ll i = 0; i < len; i++) {
            if (a[i] != b[i]) {
                adj[a[i] - 'a'].push_back(b[i] - 'a');
                inDeg[b[i] - 'a']++;
                isDiff = true;
                break;
            }
        }

        if (!isDiff && a.size() > b.size()) {
            cout << "Impossible\n";
            return;
        }
    }

    queue<ll> q;

    for (ll i = 0; i < 26; i++) {
        if (inDeg[i] == 0) {q.push(i);}
    }

    string res = "";

    while (!q.empty()) {
        ll curr = q.front(); q.pop();
        res += (curr + 'a');

        for (auto &x : adj[curr]) {
            inDeg[x]--;
            if (inDeg[x] == 0) {q.push(x);}
        }
    }

    if (res.size() != 26) {cout << "Impossible\n";}
    else {cout << res << " ";}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
