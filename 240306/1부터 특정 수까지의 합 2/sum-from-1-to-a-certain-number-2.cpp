#include <iostream>

using namespace std;

void solve(int n, int *sum) {
    if(n == 0)
        return ;
    solve(n - 1, sum);
    *sum = *sum + n;
}

int main() {
    int n;
    cin >> n;

    int sum = 0;
    solve(n, &sum);
    cout << sum;
    return 0;
}