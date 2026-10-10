#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long vertices, edges;
    cin >> vertices >> edges;

    vector<vector<long long>> graph(vertices);
    vector<bool> visited(vertices, false);
    vector<long long> parent(vertices, -1);
    queue<long long> q;

    for (long long i = 0; i < edges; i++) {
        long long src, dst;
        cin >> src >> dst;

        graph[src - 1].push_back(dst - 1);
        graph[dst - 1].push_back(src - 1);
    }

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        long long curr = q.front(); q.pop();

        for (auto &x : graph[curr]) {
            if (!visited[x]) {
                parent[x] = curr;
                visited[x] = true;
                q.push(x);
            }
        }
    }

    if (!visited[vertices - 1]) {cout << "IMPOSSIBLE\n";}
    else  {
        vector<long long> path;
        for (long long v = vertices - 1; v != -1; v = parent[v]) {path.push_back(v);}
        cout << path.size() << "\n";
        for (long long i = path.size() - 1; i >= 0; i--) {cout << path[i] + 1 << " ";}
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
