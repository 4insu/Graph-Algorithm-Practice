#include <bits/stdc++.h>
using namespace std;

using pipii = pair<int, pair<int, int>>;

int delRow[] = {-1, 1, 0, 0};
int delCol[] = {0, 0, -1, 1};

int trapRainWater(vector<vector<int>>& heightMap) {
    int r = heightMap.size(), c = heightMap[0].size(), sum = 0;

    if (heightMap.empty() || r <= 2 || c <= 2) {return 0;}

    priority_queue<pipii, vector<pipii>, greater<pipii>> pq;

    for (int i = 0; i < r; i++) {
        pq.push({heightMap[i][0], {i, 0}});
        pq.push({heightMap[i][c - 1], {i, c - 1}});

        heightMap[i][0] = 1e9;
        heightMap[i][c - 1] = 1e9;
    }

    for (int j = 1; j < c - 1; j++) {
        pq.push({heightMap[0][j], {0, j}});
        pq.push({heightMap[r - 1][j], {r - 1, j}});

        heightMap[0][j] = 1e9;
        heightMap[r - 1][j] = 1e9;
    }

    while (!pq.empty()) {
        auto curr = pq.top(); pq.pop();
        int currHeight = curr.first;
        int currRow = curr.second.first;
        int currCol = curr.second.second;

        for (int i = 0; i < 4; i++) {
            int newRow = currRow + delRow[i];
            int newCol = currCol + delCol[i];

            if (newRow >= 0 && newRow < r && newCol >= 0 && newCol < c && heightMap[newRow][newCol] != 1e9) {
                if (heightMap[newRow][newCol] < currHeight) sum += (currHeight - heightMap[newRow][newCol]);
                pq.push({max(currHeight, heightMap[newRow][newCol]), {newRow, newCol}});
                heightMap[newRow][newCol] = 1e9;
            }
        }
    }

    return sum;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> heightMap(n, vector<int> (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> heightMap[i][j];
        }
    }

    cout << trapRainWater(heightMap) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
