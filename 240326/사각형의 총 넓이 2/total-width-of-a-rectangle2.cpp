#include <iostream>
#include <cstring>

#define OFFSET 100

using namespace std;

int arr[201][201];

void print_arr(int x1, int y1, int x2, int y2){
    for(int i = x1; i < x2; i++){
        for(int j = y1; j < y2; j++){
            arr[i][j] = 1;
        }
    }
}

int main() {
    memset(arr, 0, 4 * 201 * 201);
    int n;
    cin >> n;

    while(n--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        print_arr(x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET);
    }

    int space = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(arr[i][j] == 1)
                space++;
        }
    }
    cout << space;
    return 0;
}