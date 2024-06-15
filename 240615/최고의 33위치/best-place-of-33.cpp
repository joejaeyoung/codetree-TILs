#include <iostream>
#include <algorithm>

using namespace std;

int arr[21][21];

int main() {
    int result = -1;
    int n;
    cin >> n;

    //arr_init
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    //완탐
    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < n - 2; j++) {
            int sum = 0;
            for(int x = i; x <= i + 2; x++) {
                for(int y = j; y <= j + 2; y++) {
                    sum += arr[x][y];
                }
            }
            result = max(sum, result);
        }
    }

    cout << result;
    return 0;
}