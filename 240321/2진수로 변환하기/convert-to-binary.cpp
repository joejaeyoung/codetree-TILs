#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    int n;
    int digits[20] = {};
    int cnt = 0;
    
    cin >> n;
    while (true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 2;
        n /= 2;
    }
    
    // print binary number
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
}