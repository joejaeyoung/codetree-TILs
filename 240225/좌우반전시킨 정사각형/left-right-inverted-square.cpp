#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10][10];
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            arr[i - 1][j - 1] = i * j;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >=0; j--){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}