#include <iostream>

#define OFFSET 1000

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int paper[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    for(int i = 0; i < 3; i++) {
        for(int x = x1[i]; x < x2[i]; x++) {
            for(int y = y1[i]; y < y2[i]; y++) {
                paper[x + OFFSET][y + OFFSET] = i + 1;
            }
        }
    }

    int space = 0;
    for(int x = 0; x < OFFSET * 2; x++) {
        for(int y = 0; y < OFFSET * 2; y++) {
            if (paper[x][y] == 1 || paper[x][y] == 2)
                space++;
        }
    }

    cout << space;
    return 0;
}