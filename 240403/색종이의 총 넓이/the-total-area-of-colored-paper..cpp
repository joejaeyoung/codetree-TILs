#include <iostream>

#define OFFSET 100
#define MAX 200

using namespace std;

int paper[MAX + 1][MAX + 1];

void draw(int x1, int y1, int x2, int y2){
    for(int i = x1; i <= x2; i++){
        for(int j = y1; j <= y2; j++){
            paper[j][i] = 1;
        }
    }
}

int getSpace(){
    int total = 0;
    for(int i = 0; i < MAX + 1; i++){
        for(int j = 0; j < MAX + 1; j++){
            if(paper[j][i])
                total++;
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;
        draw(x + OFFSET, y - 7 + OFFSET, x + 7 + OFFSET, y + OFFSET);
    }

    cout << getSpace() << endl;
    return 0;
}