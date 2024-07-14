#include <iostream>
#include <tuple>
#include <queue>

#define MAX_N 100
#define DIR_NUM 4
#define NOT_EXISTS make_pair(-1, -1)

using namespace std;

int n, k;

int grid[MAX_N][MAX_N];

// 현재 위치
pair<int, int> curr_cell;
queue<pair<int, int> > q;
bool visited[MAX_N][MAX_N];

void init();
void init_visited();

bool InRange(int y, int x) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool CanGo(int y, int x, int target_num) {
    return InRange(y, x) && !visited[y][x] && 
           grid[y][x] < target_num;
}

void bfs() {
    int dx[DIR_NUM] = {0, 0, 1, -1};
    int dy[DIR_NUM] = {1, -1, 0, 0};

    int cur_x, cur_y;
    tie(cur_y, cur_x) = curr_cell;
    visited[cur_y][cur_x] = true;
    q.push(curr_cell);

    int num = grid[cur_y][cur_x];

    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        int cur_x, cur_y;
        tie(cur_y, cur_x) = curr_pos;
        q.pop();

        for(int i = 0; i < DIR_NUM; i++) {
            int new_y = cur_y + dy[i];
            int new_x = cur_x + dx[i];

            if(CanGo(new_y, new_x, num)) {
                q.push(make_pair(new_y, new_x));
                visited[new_y][new_x] = true;
            }
        }
    }
}

bool NeedUpdate(pair<int, int> best_pos, pair<int, int> new_pos) {
    if (best_pos == NOT_EXISTS)
        return true;
    
    int best_y, best_x;
    tie(best_y, best_x) = best_pos;

    int new_y, new_x;
    tie(new_y, new_x) = new_pos;

    return make_tuple(grid[new_y][new_x], -new_y, -new_x) >
           make_tuple(grid[best_y][best_x], -best_y, -best_x);
}

bool move() {
    init_visited();
    bfs();

    pair<int, int> best_pos = NOT_EXISTS;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if (!visited[i][j] || make_pair(i, j) == curr_cell)
                continue;
            
            pair<int, int> new_pos = make_pair(i, j);
            if(NeedUpdate(best_pos, new_pos))
                best_pos = new_pos;
        }

    if (best_pos == NOT_EXISTS)
        return false;
    else {
        curr_cell = best_pos;
        return true;
    }
}

int main(void) {
    cin >> n >> k;
    init();
    pair<int, int> result;

    while(k--) {
        // cout << "DEBUG\n";
        // cout << curr_cell.first << " " << curr_cell.second << endl;
        bool is_moved = move();


        if (!is_moved)
            break;
    }
    
    int final_y, final_x;
    tie(final_y, final_x) = curr_cell;
    cout << final_y + 1 << " " << final_x + 1 << endl;
}

void init_visited() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            visited[i][j] = false;
}

void init() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];

    int y, x;
    cin >> y >> x;
    curr_cell = make_pair(y - 1, x - 1);
}