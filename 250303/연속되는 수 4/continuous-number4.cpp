#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt = 0;
    int maxCnt = 0;
    for(int i = 0; i < N; i++) {
        if (i == 0 || arr[i - 1] >= arr[i]) {
            maxCnt = max(maxCnt, cnt);
            cnt = 1;
        } else {
            cnt++;
        }

        if (i == N - 1) {
            maxCnt = max(maxCnt, cnt);
        }
    }
    cout << maxCnt;

    return 0;
}