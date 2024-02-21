#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[11];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++){
        if(arr[i] % 3 == 0 && arr[i] % 2 == 1)
            cout << arr[i] << endl;
    }
    return 0;
}