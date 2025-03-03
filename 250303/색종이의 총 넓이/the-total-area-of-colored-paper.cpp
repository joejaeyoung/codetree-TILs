#include <iostream>

using namespace std;

#define OFFSET 100

int N;
int x[100], y[100];

int paper[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        for(int p_x = x[i]; p_x < x[i] + 8; p_x++) {
            for(int p_y = y[i]; p_y < y[i] + 8; p_y++) {
                paper[p_x + OFFSET][p_y + OFFSET] = 1;
            }
        }
    }

    int space = 0;
    for(int i = 0; i < OFFSET * 2; i++) {
        for(int j = 0; j < OFFSET * 2; j++) {
            if (paper[i][j])
                space++;
        }
    }
    cout << space;

    // Please write your code here.

    return 0;
}