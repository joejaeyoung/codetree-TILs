#include <iostream>

using namespace std;

int arr[101];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = 101;
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}