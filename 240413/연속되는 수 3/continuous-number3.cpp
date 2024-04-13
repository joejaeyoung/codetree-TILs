#include <iostream>

using namespace std;

int arr[1001];
int main() {
    int n;
    cin >> n;

    int max_c = -1;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0)
            arr[i] = -1;
        else
            arr[i] = 1;

        if (i == 0 || arr[i] != arr[i - 1]) {
            count = 0;
        } else {
            count++;
        }
        max_c = max(max_c, count);
    }
    cout << max_c + 1;

    return 0;
}