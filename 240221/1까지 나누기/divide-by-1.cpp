#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;
    int i = 1;
    while(n != 0)
    {
        n /= i;
        i++;
        cnt++;
    }

    cout << cnt;
    return 0;
}