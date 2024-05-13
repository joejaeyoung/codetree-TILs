#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k;
    queue<int> que;

    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        que.push(i);

    while (que.empty() != true) {
        for(int i = 1; i < k; i++) {
            que.push(que.front());
            que.pop();
        }
        cout << que.front() << " ";
        que.pop();
    }

    return 0;
}