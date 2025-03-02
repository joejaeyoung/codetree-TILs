#include <iostream>

using namespace std;

#define OFFSET 100

int arr[202][202];

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for(int y = x1[i]; y < x2[i]; y++) {
            for(int x = y1[i]; x < y2[i]; x++) {
                arr[y + OFFSET][x + OFFSET] = 1;
            }
        }
    }

    int space = 0;
    for(int i = 0; i < 202; i++) {
        for(int j = 0; j < 202; j++) {
            if (arr[i][j])
                space++;
        }
    }
    cout << space;

    // Please write your code here.

    return 0;
}