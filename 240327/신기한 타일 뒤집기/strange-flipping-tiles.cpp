#include <iostream>

#define MAX_ARR 200000
#define OFFSET 100000

int arr[MAX_ARR + 1];

using namespace std;

void print(int le, int ri, int flag) {
    for(int i = le; i < ri; i++){
        arr[i] = flag;
    }
}

int main() {
    int n;
    cin >> n;

    int cur = OFFSET;
    while(n--) {
        int distance;
        char direction;

        cin >> distance >> direction;
        if(direction == 'L') {
            print(cur - distance, cur, -1);
            cur -= distance;
        }else{
            print(cur, cur + distance, 1);
            cur += distance;
        }
    }

    int white = 0, black = 0;
    for(int i = 0; i <= MAX_ARR; i++){
        if(arr[i] == -1)
            white++;
        if(arr[i] == 1)
            black++;
    }
    cout << white << " " <<  black << endl;
    return 0;
}