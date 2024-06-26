#include <iostream>

using namespace std;

int arr[21][21];
int goldprice;
int n;
int maxgoldnum = 0;
int total_place = 0;

int cost(int num) {
    return (num * num) + (num + 1) * (num + 1);
}

int getGoldNum(int x, int y, int num) {
    int goldnum = 0;
    int gap = 0;

        gap = num;
    for(int k = y - num; k <= y + num; k++) {
        if ( k <= y) {
            for(int l = x - num + gap; l <= x + num - gap; l++) {
                if(k >= 0 && k < n && l >= 0 && l < n) {
                    total_place += 1;
                    goldnum += arr[k][l];
                }
            }
            gap--;
        }
        else {
            gap++;
            for(int l = x - num + gap; l <= x + num - gap; l++) {
               if(k >= 0 && k < n && l >= 0 && l < n) {
                goldnum += arr[k][l]; 
                total_place += 1;
               }
            }
        }
        if (gap < 0)
            gap = 0;
    }
    return goldnum;
}

int main() {
    cin >> n >> goldprice;

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    //중심 좌표 변경
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            //채굴 범위
            for(int num = 0; num <= n; num++) {
                if(goldprice * getGoldNum(i, j, num) >= cost(num))
                    maxgoldnum = max(maxgoldnum, getGoldNum(i, j, num));
                total_place = 0;
            }
        }
    }
    cout << maxgoldnum;
    return 0;
}