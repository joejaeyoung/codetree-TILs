#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    long long firstTime = 11 * 24 * 60 + 11 * 60 + 11;
    long long endTime = a * 24 * 60 + b * 60 + c;
    if (endTime < firstTime)
        cout << -1;

    cout << endTime - firstTime;


    return 0;
}