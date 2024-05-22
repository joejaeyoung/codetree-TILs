#include <iostream>

using namespace std;

int arr[11];
int main() {
    int sum = 0;
    for(int i = 0; i <= 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}