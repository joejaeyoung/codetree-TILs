#include <iostream>
#include <algorithm>

using namespace std;

int N;
bool arr[1000];

int main() {
    cin >> N;
    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        arr[i] = a < 0 ? false : true;
    }

    int cnt = 0;
    int maxCnt = 0;

    for(int i = 0; i < N; i++) {
        if (i == 0 || arr[i - 1] != arr[i]) {
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


    // Please write your code here.

    return 0;
}