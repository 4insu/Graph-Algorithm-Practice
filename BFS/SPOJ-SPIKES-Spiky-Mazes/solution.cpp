#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pllll = pair<ll, pair<ll, ll>>;

const ll NLINF = -1e18;

ll delRow[] = {-1, 1, 0, 0};
ll delCol[] = {0, 0, -1, 1};

void solve() {
    ll n, m, k, dstX, dstY; cin >> n >> m >> k;

    vector<vector<char>> grid(n, vector<char> (m));
    vector<vector<ll>> maxHealth(n, vector<ll> (m, NLINF));
    queue<pllll> q;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '@') {q.push({k / 2, {i, j}}); maxHealth[i][j] = k / 2;}
            if (grid[i][j] == 'x') {dstX = i; dstY = j;}
        }
    }

    ll isPossible = false;

    while (!q.empty()) {
        auto curr = q.front(); q.pop();
        ll currHealth = curr.first;
        ll currRow = curr.second.first;
        ll currCol = curr.second.second;

        if (currRow == dstX && currCol == dstY) {isPossible = true; break;}

        for (ll i = 0; i < 4; i++) {
            ll nextRow = currRow + delRow[i];
            ll nextCol = currCol + delCol[i];

            if (nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < m ) {
                char nextObs = grid[nextRow][nextCol];
                if (nextObs != '#') {
                    ll nextHealth = currHealth - (nextObs == 's' ? 1 : 0);
                    if (nextHealth >= 0 && nextHealth > maxHealth[nextRow][nextCol]) {
                        maxHealth[nextRow][nextCol] = nextHealth;
                        q.push({nextHealth, {nextRow, nextCol}});
                    }
                }
            }
        }
    }

    cout << (isPossible ? "SUCCESS\n" : "IMPOSSIBLE\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
