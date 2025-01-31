#include <iostream>

using namespace std;

int N, M, K;
int student[10001];

int result = -1;
int main() {
    cin >> N >> M >> K;

    int num;
    int flag = 1;
    for (int i = 0; i < M; i++) {
        cin >> num;
        student[num]++;
        if (flag) {
            if (student[num] >= K) {
                result = num;
                flag = 0;
            }
        }
    }
    cout << result;

    // Write your code here!

    return 0;
}