#include <iostream>
#include <cstring>

#define MAX_RAN 2001
#define OFFSET 1000

using namespace std;

int arr[MAX_RAN][MAX_RAN];

void print_arr(int x1, int y1, int x2, int y2, int i){
    i++;
    for(int x = x1; x < x2; x++){
        for(int y = y1; y < y2; y++){
            arr[x][y] = i;
        }
    }
}

int main() {
    memset(arr, 0, 4 * MAX_RAN * MAX_RAN);
    int x1, y1, x2, y2;
    for(int i = 0; i < 3; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        print_arr(x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET, i);
    }

    int space = 0;
    for(int i = 0; i < MAX_RAN; i++){
        for(int j = 0; j < MAX_RAN; j++){
            if(arr[i][j] <= 2 && arr[i][j] >= 1)
                space++;
        }
    }
    cout << space;
    return 0;
}