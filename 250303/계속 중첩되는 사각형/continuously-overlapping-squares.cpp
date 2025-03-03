#include <iostream>

using namespace std;

#define OFFSET 100

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int paper[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        for(int x = x1[i]; x < x2[i]; x++) {
            for(int y = y1[i]; y < y2[i]; y++) {
                paper[x + OFFSET][y + OFFSET] = i % 2 + 1;
            }
        }
    }

    int space = 0;
    for(int x = 0; x < OFFSET * 2; x++) {
        for(int y = 0; y < OFFSET * 2; y++) {
            if (paper[x][y] == 2)
                space++;
        }
    }
    cout << space;

    // Please write your code here.

    return 0;
}