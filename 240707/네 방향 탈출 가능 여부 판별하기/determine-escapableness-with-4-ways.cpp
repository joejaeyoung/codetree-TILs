#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

int grid[MAX][MAX];
bool visited[MAX][MAX];
queue<pair<int, int>> que;
int height, width;

void push(int y, int x) {
    visited[y][x] = true;
    que.push(make_pair(y, x));
}

bool InRange(int y, int x) {
    if (x < 0 || x >= width)
        return false;
    if (y < 0 || y >= height)
        return false;
    return true;
}

bool CanGo(int y, int x) {
    if (!InRange(y, x))
        return false;
    //cout << "visited" << visited[y][x] << endl;
    //cout << "grid" << grid[y][x] << endl;
    if (visited[y][x] == true || grid[y][x] == 0)
        return false;
    return true;
}

void BFS() {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while(!que.empty()) {
        pair<int, int> curr_pos = que.front();
        que.pop();

        int y = curr_pos.first;
        int x = curr_pos.second;
        //cout << y << "    " << x << endl;
        for(int i = 0; i < 4; i++) {
            int new_y = y + dy[i];
            int new_x = x + dx[i];
            if (CanGo(new_y, new_x)) {
                //cout << new_y << " " << new_x << endl;
                push(new_y, new_x);
            }
        }
    }
}

int main() {
    cin >> height >> width;

    for(int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> grid[i][j];
        }
    }
    push(0, 0);
    BFS();

    if (visited[height - 1][width - 1])
        cout << 1;
    else
        cout << 0;
    return 0;
}