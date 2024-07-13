#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[101][101];
int visited[101][101];
int n, k;
queue<pair<int, int>> q;

pair<int, int> findNextNode(int x) {
    int max = -1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (arr[i][j] >= x)
                break;
            if ((arr[i][j] < x) && (max < arr[i][j]))
                max = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (arr[i][j] == max)
                return (make_pair(i, j));
        }
    }
    return make_pair(-1, -1);
}

bool CanGo(int y, int x) {
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    for(int i = 0; i < 4; i++) {
        int tmp_x = x + dx[i];
        int tmp_y = y + dy[i];

        if (tmp_x >= 0 && tmp_x < n && tmp_y >= 0 && tmp_y < n) {
            if (arr[y][x] > arr[tmp_y][tmp_x])
                return (true);
        }
    }
    return (false);
}

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int first_x, first_y;
    cin >> first_y >> first_x;

    //cout << first_y << " " << first_x << endl;
    q.push(make_pair(first_y - 1, first_x - 1));

    while(k--) {
        pair<int, int> current_pos = q.front();

        int cur_y = current_pos.first;
        int cur_x = current_pos.second;

        if(CanGo(cur_y, cur_x)) {
            pair<int, int> next_pos = findNextNode(arr[cur_y][cur_x]);
            if (next_pos.first == -1)
                break;
            q.pop();
            q.push(make_pair(next_pos.first, next_pos.second));
            //cout << next_pos.first << " " << next_pos.second << endl;
        }       
    }

    int result_y = q.front().first;
    int result_x = q.front().second;
    cout << result_y + 1 << " " << result_x + 1 << '\n';
    return 0;
}