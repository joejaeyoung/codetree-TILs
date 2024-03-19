#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[101];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';

    sort(arr, arr + n, greater<int>());
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
    
    return 0;
}