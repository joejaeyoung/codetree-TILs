#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int arr[201][201];
int max_num = -1;

int find_min_four(int x, int y) {
    int tmp[4];
    tmp[0] = arr[y][x];
    tmp[1] = arr[y][x + 1];
    tmp[2] = arr[y + 1][x];
    tmp[3] = arr[y + 1][x + 1];
    
    sort(tmp, tmp + 4);
    return tmp[1] + tmp[2] + tmp[3];
}

void find_four(int height, int width) {
    for(int y = 0; y < height - 1; y++) {
        for(int x = 0; x < width - 1; x++) {
            int sum = find_min_four(y, x);
            max_num = max(sum, max_num);
        }
    }
}

void find_three_first(int height, int width) {
    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width - 2; x++) {
            int sum = arr[y][x] + arr[y][x + 1] + arr[y][x + 2];
            max_num = max(sum, max_num);
        }
    }
}

void find_three_sec(int height, int width) {
    for(int y = 0; y < height - 2; y++) {
        for(int x = 0; x < width; x++) {
            int sum = arr[y][x] + arr[y + 1][x] + arr[y + 2][x];
            max_num = max(sum, max_num);
        }
    }
}

int main() {
    int height, width;
    cin >> height >> width;

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            cin >> arr[i][j];
        }
    }
    find_four(height, width);
    find_three_first(height, width);
    find_three_sec(height, width);

    cout << max_num;

    return 0;
}