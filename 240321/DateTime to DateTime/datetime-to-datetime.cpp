#include <iostream>

using namespace std;

int main() {
    int day, hour, min;
    cin >> day >> hour >> min;

    day = day - 11;
    hour = hour - 11;
    min = min - 11;

    int total = day * 24 * 60 + hour * 60 + min;

    if (total < 0)
        cout << -1;
    else
        cout << total;
    return 0;
}