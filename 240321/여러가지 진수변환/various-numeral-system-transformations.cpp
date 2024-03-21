#include <iostream>

using namespace std;

int main() {
    int digits[20] = {};
    int n, div;
    int cnt = 0;
    cin >> n >> div;

    while(true) {
        if(n < div) {
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % div;
        n /= div;
    }

    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
    return 0;
}