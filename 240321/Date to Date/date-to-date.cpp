#include <iostream>

using namespace std;

int main() {
    int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int total1 = 0, total2 = 0;
    for(int i = 0; i < m1; i++){
        total1 += month_days[i];
    }
    total1 += d1;

    for(int i = 0; i < m2; i++){
        total2 += month_days[i];
    }
    total2 += d2;

    cout << total2 - total1 + 1;
    return 0;
}