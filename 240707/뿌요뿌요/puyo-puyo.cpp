#include <iostream>
#include <algorithm>

#define MAX 100
#define DIR_NUM 4

using namespace std;

int graph[MAX][MAX];
bool visited[MAX][MAX];
int n;
int pung_num;

bool CanGo(int y, int x, int k) {
    if (y < 0 || y >= n || x < 0 || x >= n)
        return false;
    if (graph[y][x] != k || visited[y][x])
        return false;
    return true;
}

void DFS(int y, int x, int k) {
    int dx[DIR_NUM] = {1, -1, 0, 0};
    int dy[DIR_NUM] = {0, 0, 1, -1};

    for(int i = 0; i < DIR_NUM; i++) {
        int new_y = y + dy[i];
        int new_x = x + dx[i];

        if (CanGo(new_y, new_x, k)) {
            pung_num++;
            visited[new_y][new_x] = true;
            DFS(new_y, new_x, k);
        }
    }

}

int main() {
    cin >> n;

    int max_num = -1;
    int num = 0;
    for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (CanGo(i, j, graph[i][j])) {
                visited[i][j] = true;
                pung_num = 1;
                DFS(i, j, graph[i][j]);

                //cout << pung_num << ": pung_num\n";
                if (pung_num >= 4)
                    num++;
                if (max_num < pung_num)
                    max_num = pung_num;
                
            }
        }
    }
    cout << num << " " << max_num;
    return 0;
}