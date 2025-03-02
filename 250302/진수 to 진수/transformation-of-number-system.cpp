#include <iostream>

using namespace std;

int a, b;
string n;

int arr[32];

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    int decimal = 0;
    for(int i = 0; i < n.length(); i++) {
        decimal = decimal * a + n.at(i) - '0';
    }

    int idx = 0;
    while(1) {
        if (decimal < b) {
            arr[idx] = decimal;
            break;
        }

        arr[idx++] = decimal % b;
        decimal /= b;
    }

    for(int i = idx; i >= 0; i--)
        cout << arr[i];

    return 0;
}