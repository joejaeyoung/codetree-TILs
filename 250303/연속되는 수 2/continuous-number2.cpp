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

    int cnt = 1;
    int cntMax = -1;
    for (int i = 0; i < N; i++) {
        if (i == 0 || arr[i - 1] != arr[i]) {
            cntMax = max(cntMax, cnt);
            cnt = 1;
        } else {
            cnt++;
        }

        if (i == N - 1)
            cntMax = max(cntMax, cnt);
    }

    // Please write your code here.
    cout << cntMax;
    return 0;
}