#include <iostream>
#include <algorithm>

using namespace std;

int width;
int height;
int arr[21][21];

int is_valid(int y, int x, int height, int width) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if (arr[i + y][j + x] <= 0)
                return 0;
        }

    }
    return 1;
}

int main() {
    cin >> height >> width;
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            cin >> arr[i][j];
        }
    }

    int space = -1;
    int flag = 1;
    //시작 좌표
    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width; x++) {
            if (arr[y][x] <= 0)
                continue;
            //가로 세로 정하기
            for(int h = 1; y + h <= height; h++) {
                for(int w = 1; x + w <= width; w++) {
                    if(is_valid(y, x, h, w)) {
                        space = max(space, h * w);
                        flag = 0;
                    }
                }
            }
        }
    }
    if(flag)
        cout << -1;
    else
        cout << space << endl;
    return 0;
}