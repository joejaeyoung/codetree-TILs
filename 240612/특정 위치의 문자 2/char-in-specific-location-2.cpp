#include <iostream>

using namespace std;

char arr[10];
int main() {
    // 여기에 코드를 작성해주세요.

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    printf("%c %c %c", arr[1], arr[4], arr[7]);
    return 0;
}