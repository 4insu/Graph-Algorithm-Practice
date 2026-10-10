#include <bits/stdc++.h>
using namespace std;

int delRow[] = {-1, 1, 0, 0};
int delCol[] = {0, 0, -1, 1};
string moveDir = "UDLR";

bool isValid(const vector<vector<char>>& maze, int currRow, int currCol) {
    int rows = maze.size();
    int cols = maze[0].size();

    if (currRow >= 0 && currRow < rows && currCol >= 0 && currCol < cols) {return true;}
    return false;
}

void initializeParent(const vector<vector<char>>& maze, vector<vector<pair<int, int>>>& parent) {
    for (int i = 0; i < maze.size(); i++) {
        for (int j = 0; j < maze[0].size(); j++) {
            if (maze[i][j] == '#') {parent[i][j] = {INT_MAX, INT_MAX};}
        }
    }
}

void utilityBfs(int srcRow, int srcCol, const vector<vector<char>>& maze, vector<vector<bool>>& visited, vector<vector<pair<int, int>>>& parent) {
    queue<pair<int, int>> q;
    q.push({srcRow, srcCol});
    visited[srcRow][srcCol] = true;

    while (!q.empty()) {
        auto curr = q.front(); q.pop();
        int currRow = curr.first;
        int currCol = curr.second;

        for (int i = 0; i < 4; i++) {
            int newRow = currRow + delRow[i];
            int newCol = currCol + delCol[i];

            if (isValid(maze, newRow, newCol) && !visited[newRow][newCol] && (maze[newRow][newCol] == '.' || maze[newRow][newCol] == 'B')) {
                visited[newRow][newCol] = true;
                parent[newRow][newCol] = {currRow, currCol};
                q.push({newRow, newCol});
            }
        }
    }
}

vector<pair<int, int>> getShortestPath(int dstRow, int dstCol, const vector<vector<char>>& maze, const vector<vector<pair<int, int>>>& parent, const vector<vector<bool>>& visited) {
    vector<pair<int, int>> path;

    if (!visited[dstRow][dstCol]) return path;

    for (pair<int, int> v = {dstRow, dstCol}; v != make_pair(-1, -1); v = parent[v.first][v.second]) {path.push_back(v);}

    return path;
}

pair<int, int> getSrc(const vector<vector<char>>& maze, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (maze[i][j] == 'A') {return {i, j};}
        }
    }

    return {-1, -1};
}

pair<int, int> getDst(const vector<vector<char>>& maze, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (maze[i][j] == 'B') {return {i, j};}
        }
    }

    return {-1, -1};
}

char getDir(int currRow, int currCol, int newRow, int newCol) {
    for (int i = 0; i < 4; i++) {
        if (currRow + delRow[i] == newRow && currCol + delCol[i] == newCol) {return moveDir[i];}
    }
    return 'X';
}

void solve() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> maze(rows, vector<char>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> maze[i][j];
        }
    }

    pair<int, int> src = getSrc(maze, rows, cols);
    pair<int, int> dst = getDst(maze, rows, cols);

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    vector<vector<pair<int, int>>> parent(rows, vector<pair<int, int>>(cols, {-1, -1}));
    initializeParent(maze, parent);

    utilityBfs(src.first, src.second, maze, visited, parent);

    vector<pair<int, int>> path = getShortestPath(dst.first, dst.second, maze, parent, visited);
    reverse(path.begin(), path.end());

    if (path.empty()) {cout << "NO\n";}
    else {
        cout << "YES\n";
        cout << path.size() - 1 << "\n";

        for (int i = 0; i < path.size() - 1; i++) {
            cout << getDir(path[i].first, path[i].second, path[i + 1].first, path[i + 1].second);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
