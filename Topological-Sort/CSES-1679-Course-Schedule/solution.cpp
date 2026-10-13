#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long vertices, edges;

    cin >> vertices >> edges;

    vector<vector<long long>> graph(vertices);
    vector<long long> inDeg(vertices, 0);
    queue<long long> q;

    for (long long i = 0; i < edges; i++) {
        long long src, dst;
        cin >> src >> dst;

        graph[src - 1].push_back(dst - 1);
        inDeg[dst - 1]++;
    }

    vector<long long> courseSeq;

    for (int i = 0; i < vertices; i++) {
        if (inDeg[i] == 0) {q.push(i);}
    }

    while (!q.empty()) {
        int curr = q.front(); q.pop();
        courseSeq.push_back(curr);

        for (auto &x : graph[curr]) {
            inDeg[x]--;
            if (inDeg[x] == 0) {q.push(x);}
        }
    }

    if ((long long)courseSeq.size() != vertices) {cout << "IMPOSSIBLE\n";}
    else {
        for (auto &x : courseSeq) {cout << x + 1 << " ";}
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
