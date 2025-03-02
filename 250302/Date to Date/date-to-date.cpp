#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;


    int totalDays = 1;
    // Please write your code here.
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(1) {
        if (m1 == m2 && d1 == d2)
            break;

        totalDays++;
        d1++;

        if (d1 > days[m1 - 1]) {
            m1++;
            d1 = 1;
        }

    }

    cout << totalDays;
    return 0;
}