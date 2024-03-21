#include <iostream>
#include <string>

using namespace std;

int NumOfDays(int m, int d) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for(int i = 1; i < m; i++)
        total_days += days[i];

    total_days += d;

    return total_days;
}
int main() {
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int count_day = NumOfDays(m2, d2) - NumOfDays(m1, d1);

    while(count_day < 0)
        count_day += 7;

    cout << days[count_day % 7];
    return 0;
}