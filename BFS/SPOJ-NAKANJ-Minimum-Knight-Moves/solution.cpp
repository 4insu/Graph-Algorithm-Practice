#include <bits/stdc++.h>
using namespace std;

int delX[] = {-2, -2, 2, 2, -1, 1, -1, 1};
int delY[] = {-1, 1, -1, 1, -2, -2, 2, 2};

void solve() {
    string start, end; cin >> start >> end;

    int res;
    int startX = (start[0] - 'a'), startY = (start[1] - '1');
    int endX = (end[0] - 'a'), endY = (end[1] - '1');

    vector<vector<int>> grid(8, vector<int> (8, -1));

    queue<pair<int, pair<int, int>>> q; q.push({0, {startX, startY}});
    grid[startX][startY] = 0;

    while (!q.empty()) {
        auto curr = q.front(); q.pop();
        int currTime = curr.first;
        int currX = curr.second.first;
        int currY = curr.second.second;

        if (currX == endX && currY == endY) {res = currTime; break;}

        for (int i = 0; i < 8; i++) {
            int newX = currX + delX[i];
            int newY = currY + delY[i];

            if (newX >= 0 && newX < 8 && newY >= 0 && newY < 8 && grid[newX][newY] == -1) {
                grid[newX][newY] = currTime + 1;
                q.push({currTime + 1, {newX, newY}});
            }
        }
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
