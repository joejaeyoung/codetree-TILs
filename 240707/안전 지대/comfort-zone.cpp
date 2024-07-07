#include <iostream>
#include <algorithm>

#define MAX 50
#define MAX_HEIGHT 100
#define DIR_NUM 4

using namespace std;

int height, width;
int graph[MAX][MAX];
bool visited[MAX][MAX];
int zone_num;

void initVisited() {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            visited[i][j] = false;
        }
    }
}

bool InRange(int y, int x) {
    return x >= 0 && x < width && y >= 0 && y < height;
}

// 탐색하는 위치로 움직일 수 있는지 여부를 반환합니다.
bool CanGo(int y, int x, int k) {
    if(!InRange(y, x)) 
        return false;

    if(visited[y][x] || graph[y][x] <= k)
        return false;

    return true;
}

void DFS(int y, int x, int k) {
    //0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽
    int dx[DIR_NUM] = {0, 1, 0, -1};
    int dy[DIR_NUM] = {1, 0, -1, 0};
    
    // 네 방향에 각각에 대하여 DFS 탐색을 합니다.
    for(int dir = 0; dir < DIR_NUM; dir++) {
        int new_x = x + dx[dir];
        int new_y = y + dy[dir];

        if(CanGo(new_y, new_x, k)){
            visited[new_y][new_x] = true;
            DFS(new_y, new_x, k);
        }
    }
}

void GetZoneNum(int k) {
    zone_num = 0;
    initVisited();

    for(int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (CanGo(i, j, k)) {
                visited[i][j] = true;
                zone_num++;

                DFS(i, j ,k);
            }
        }
    }
}

int main() {
    int max_zone_num = -1;
    int answer_k = 0;

    cin >> height >> width;

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            cin >> graph[i][j];
        }
    }

    for (int k = 1; k <= MAX_HEIGHT; k++) {
        GetZoneNum(k);

        if (zone_num > max_zone_num) {
            max_zone_num = zone_num;
            answer_k = k;
        }
    }

    cout << answer_k << " " << max_zone_num;
}