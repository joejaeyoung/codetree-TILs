#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];

int main() {
    int n;
    cin >> n;

    int count = 0;
    int max_c = -1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(i == 0 || arr[i] < arr[i - 1]) {
            count = 0;
        } else {
            count++;
        }
        max_c = max(count, max_c);
    }
    cout << max_c;

    return 0;
}