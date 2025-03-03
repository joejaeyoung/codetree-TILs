#include <iostream>
#include <algorithm>

using namespace std;

#define OFFSET 1000

int x1[2], y1[2];
int x2[2], y2[2];

int paper[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    for(int x = x1[0]; x < x2[0]; x++) {
        for(int y = y1[0]; y < y2[0]; y++) {
            paper[x + OFFSET][y + OFFSET] = 1;
        }
    }

    for(int x = x1[1]; x < x2[1]; x++) {
        for(int y = y1[1]; y < y2[1]; y++) {
            paper[x + OFFSET][y + OFFSET] = 0;
        }
    }

    int x_min = OFFSET * 2 + 1;
    int y_min = OFFSET * 2 + 1;
    int x_max = -1;
    int y_max = -1;
    for(int x = 0; x < OFFSET * 2; x++) {
        for(int y = 0; y < OFFSET * 2; y++) {
            if (paper[x][y] == 1) {
                x_min = min(x_min, x);
                y_min = min(y_min, y);
                x_max = max(x_max, x);
                y_max = max(y_max, y);
            }
        }
    }

    // cout << x_min << " " << x_max << endl;
    // cout << y_min << " " << y_max << endl;
    if (x_min == OFFSET * 2 +1 || x_max == -1)
        cout << 0;
    else
        cout << (y_max - y_min + 1) * (x_max - x_min + 1);


    return 0;
}