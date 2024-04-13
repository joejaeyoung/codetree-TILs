#include <iostream>

using namespace std;

int arr[1001];

int main() {
    int n;
    cin >> n;

    int max_num = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] == arr[i-1]) {
            count++;
        }
        else {
            max_num = max(max_num, count);
            count = 0;
        }
    }
    cout << max_num + 1;
    return 0;
}