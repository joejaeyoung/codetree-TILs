#include <iostream>
#include <algorithm>

using namespace std;

#define OFFSET 100
#define MAX_R 200

int paper[MAX_R + 1][MAX_R + 1];

int main() {
    int n;
    cin >> n;

    int x1, y1, x2, y2;
    int color = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) //빨간색
            color = 2;
        else
            color = 1;

        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;
        for(int x = x1; x < x2; x++)
            for(int y = y1; y < y2; y++)
                paper[x][y] = color;
    }

    int area = 0;
    for(int x = 0; x < MAX_R; x++)
        for(int y = 0; y < MAX_R; y++)
            if(paper[x][y] == 1) {
                area++;
            }  
    
    cout << area;
    return 0;
}