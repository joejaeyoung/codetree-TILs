#include <iostream>

using namespace std;

string N;
int binary[32];

int main() {
    cin >> N;

    int idx = 0;
    int num = 0;

    for(int i = 0; i < N.length(); i++) {
        num = num * 2 + N.at(i) - '0';
    }
    //cout << num << "\n";

    num *= 17;
    idx = 0;
    while(true) {
        if (num < 2) {
            binary[idx++] = num;
            break;
        }

        binary[idx++] = num % 2;
        num /= 2;
    }

    for(int i = idx - 1; i >= 0; i--) {
        cout << binary[i];
    }


    // Please write your code here.

    return 0;
}