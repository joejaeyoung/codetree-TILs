#include <iostream>

using namespace std;

int arr[101];
int main() {
    // 여기에 코드를 작성해주세요.
    int tmp = 1;
    int total = 0;
    int idx = 0;
    while(tmp != 0) {
        cin >> tmp;
        arr[idx++] = tmp;
        if(tmp == 0)
            break;
    }

    total = arr[idx - 2] + arr[idx - 3] + arr[idx-4];
    cout << total;
    return 0;
}