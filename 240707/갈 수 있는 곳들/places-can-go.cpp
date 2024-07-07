#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

#define MAX 100
#define DIR_NUM 4

using namespace std;

int grid[MAX][MAX];
bool visited[MAX][MAX];
queue<pair<int, int>> q;

int answer;
int n;

void push(int y, int x) {
    visited[y][x] = true;
    //cout << "y :" << y << " x : " << x << endl;
    answer++;
    q.push(make_pair(y, x));
}

bool InRange(int y, int x) {
    if (x < 0 || x >= n)
        return false;
    if (y < 0 || y >= n)
        return false;
    return true;
}

bool CanGo(int y, int x) {
    if (!InRange(y, x))
        return false;
    //cout << "visited" << visited[y][x] << endl;
    //cout << "grid" << grid[y][x] << endl;
    if (visited[y][x] == true || grid[y][x] == 1)
        return false;
    return true;
}

void BFS() {
    int dy[DIR_NUM] = {1, -1, 0, 0};
    int dx[DIR_NUM] = {0, 0, 1, -1};

    while(!q.empty()) {
        pair<int, int> cur_pos = q.front();
        q.pop();

        int y = cur_pos.first;
        int x = cur_pos.second;

        for (int i = 0; i < DIR_NUM; i++) {
            int new_y = y + dy[i];
            int new_x = x + dx[i];

            if (CanGo(new_y, new_x)) {
                push(new_y, new_x);
                //answer++;
            }  
        }
    }
}

int main() {
    int point_num = 0;
    cin >> n >> point_num;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];
    
    while(point_num--) {
        int x, y;
        cin >> x >> y;
        if (CanGo(y - 1, x - 1))
            push(y - 1, x - 1);
        BFS();
    }

    cout << answer;
    return 0;
}