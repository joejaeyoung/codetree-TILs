#include <iostream>
#include <algorithm>

#define MAX 101

using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX];
int dx[2] = {1, 0};
int dy[2] = {0, 1};
bool finish;

int height, width;

bool inRange(int y, int x) {
    if (x < 0 || x >= width)
        return false;
    if (y < 0 || y >= height)
        return false;
    if (visited[y][x])
        return false;
    return true;
}

bool CanGo(int y, int x) {
    if (!inRange(y, x)) {
        return false;
    }

    if (arr[y][x] == 0)
        return false;
    return true;
}

void DFS(int Y, int X) {
    visited[Y][X] = 1;
    if (visited[height - 1][width - 1])
        return ;

    for(int i = 0; i < 2; i++) {
        int new_x = X + dx[i];
        int new_y = Y + dy[i];
        if (CanGo(new_y, new_x))
            DFS(new_y, new_x);
    }
}

int main() {
    cin >> height >> width;

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            cin >> arr[i][j];
        }
    }

    DFS(0, 0);

    if (visited[height - 1][width - 1] != 0)
        cout << "1";
    else
        cout << "0";
    return 0;
}