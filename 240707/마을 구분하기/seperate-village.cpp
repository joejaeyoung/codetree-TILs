#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 26
#define DIR_NUM 4

using namespace std;

int graph[MAX][MAX];
int visited[MAX][MAX];
int n;
vector<int> people_nums;
int people_num;


// 탐색하는 위치가 격자 범위 내에 있는지 여부를 반환합니다.
bool InRange(int y, int x) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

// 탐색하는 위치로 움직일 수 있는지 여부를 반환합니다.
bool CanGo(int y, int x) {
    if(!InRange(y, x))
        return false;

    if(visited[y][x] || graph[y][x] == 0)
        return false;

    return true;
}

void DFS(int y, int x) {
    int dx[DIR_NUM] = {0, 1, 0, -1};
    int dy[DIR_NUM] = {1, 0, -1, 0};

    for (int dir = 0; dir < DIR_NUM; dir++) {
        int new_x = x + dx[dir];
        int new_y = y + dy[dir];

        if (CanGo(new_y, new_x)) {
            visited[new_y][new_x] = true;
            people_num++;
            DFS(new_y, new_x);
        }
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(CanGo(i, j)) {
                visited[i][j] = true;
                people_num = 1;

                DFS(i, j);

                people_nums.push_back(people_num);
            }
        }
    }

    sort(people_nums.begin(), people_nums.end());

    cout << (int)people_nums.size() << endl;
    for(int i = 0; i < (int)people_nums.size(); i++) {
        cout << people_nums[i] << endl;
    }
    return 0;
}