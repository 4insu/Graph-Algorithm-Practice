#include <bits/stdc++.h>
using namespace std;

void utilityDFS(int src, vector<vector<int>>& adj, vector<int>& stk, vector<bool>& visited) {
    visited[src] = true;

    for (auto &x : adj[src]) {
        if (!visited[x]) utilityDFS(x, adj, stk, visited);
    }

    stk.push_back(src);
}

void solve() {
    int n; cin >> n;
    vector<int> edges(n); for (int i = 0; i < n; i++) {cin >> edges[i];}
    vector<vector<int>> oAdj(n), rAdj(n);
    for (int i = 0; i < n; i++) {
        if (edges[i] != -1) {
            oAdj[i].push_back(edges[i]);
            rAdj[edges[i]].push_back(i);
        }
    }

    vector<bool> visited(n, false);
    vector<int> stk;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {utilityDFS(i, oAdj, stk, visited);}
    }

    visited.assign(n, false);
    int res = 1;

    for (int i = n - 1; i >= 0; i--) {
        if (!visited[stk[i]]) {
            vector<int> component;
            utilityDFS(stk[i], rAdj, component, visited);
            res = max(res, (int)component.size());
        }
    }

    cout << ((res == 1) ? -1 : res) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
