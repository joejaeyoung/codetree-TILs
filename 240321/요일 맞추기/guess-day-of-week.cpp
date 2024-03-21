#include <iostream>
#include <string>

using namespace std;

int main() {
    int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int cnt = 0;
    for(int i = m1; i <= m2; i++){
        for(int j = d1; j <= month_days[i]; j++){
            cnt++;
        }
    }

    cout << days[cnt % 7];
    return 0;
}