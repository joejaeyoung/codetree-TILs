#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

#define MAX_N 20
#define BOMB_TYPE_NUM 3

using namespace std;

int n;
int bomb_type[MAX_N][MAX_N];
bool bombed[MAX_N][MAX_N];

int ans;

vector<pair<int, int>> bomb_pos;

bool InRange(int y, int x) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void Bomb(int x, int y, int b_type) {
    // 폭탄 종류마다 터질 위치를 미리 정의합니다.
    pair<int, int> bomb_shapes[BOMB_TYPE_NUM + 1][5] = {
        {},
        { {-2, 0}, {-1, 0}, {0, 0},  {1, 0}, {2, 0}},
        { {-1, 0},  {1, 0}, {0, 0}, {0, -1}, {0, 1}},
        {{-1, -1}, {-1, 1}, {0, 0}, {1, -1}, {1, 1}}
    };
    
    // 격자 내 칸에 대해서만 영역을 표시합니다.
    for(int i = 0; i < 5; i++) {
        int dx, dy;
        tie(dx, dy) = bomb_shapes[b_type][i];
        
        int nx = x + dx, ny = y + dy;
        if(InRange(nx, ny))
            bombed[nx][ny] = true;
    }
}

int Calc() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            bombed[i][j] = false;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (bomb_type[i][j])
                Bomb(i, j, bomb_type[i][j]);
    
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(bombed[i][j])
                 cnt++;

    return cnt;
}

void FindMaxArea(int cnt) {
    if (cnt == (int) bomb_pos.size()) {
        ans = max(ans, Calc());
        return ;
    }

    //폭탄을 터트릴 위치를 백트래킹 추적
    for(int i = 1; i <= 3; i++) {
        int y, x;
        tie(y, x) = bomb_pos[cnt];
        bomb_type[y][x] = i;
        FindMaxArea(cnt + 1);
        bomb_type[y][x] = 0;
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            int bomb_place;
            cin >> bomb_place;
            if (bomb_place)
                bomb_pos.push_back(make_pair(i, j));
        }

    FindMaxArea(0);

    cout << ans;
    return 0;
}