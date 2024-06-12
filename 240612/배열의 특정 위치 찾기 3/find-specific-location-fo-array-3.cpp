#include <iostream>

using namespace std;

int arr[101];
int main() {
    // 여기에 코드를 작성해주세요.
    int tmp = 1;
    int total = 0;
    while(tmp != 0) {
        cin >> tmp;
        total += tmp;
    }
    cout << total;
    return 0;
}