#include <iostream>

using namespace std;

string binary;

int main() {
    cin >> binary;

    // Please write your code here.

    int num = 0;
    for(int i = 0; i < binary.length(); i++) {
        num = num * 2 + (binary[i] - '0');
       // cout << c << "\n";
    }

    cout << num;

    return 0;
}