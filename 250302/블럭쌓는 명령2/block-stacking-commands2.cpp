#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int line[101];
int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for(int j = A[i]; j <= B[i]; j++)
            line[j] += 1;
    }

    int max = -1;
    for(int i = 1; i <= N + 1; i++) {
        if (max < line[i])
            max = line[i];
    }
    cout << max;

    // Please write your code here.

    return 0;
}