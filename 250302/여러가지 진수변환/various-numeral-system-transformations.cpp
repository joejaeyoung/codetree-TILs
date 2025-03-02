#include <iostream>

using namespace std;

int N, B;

int arr[32];

int main() {
    cin >> N >> B;

    // Please write your code here.
    int idx = 0;
    while(true) {
        if (N < B) {
            arr[idx++] = N;
            break ;
        }

        arr[idx++] = N % B;
        N /= B;
    }

    for(int i = idx - 1; i >= 0; i--)
        cout << arr[i];

    return 0;
}