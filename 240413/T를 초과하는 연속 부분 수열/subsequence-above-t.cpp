#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];

int main() {
    int n, t;
    cin >> n >> t;

    int max_c = 1;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] <= t)
            count = 0;
        else
            count++;
        max_c = max(max_c, count);
    }
    cout << max_c;
    return 0;
}