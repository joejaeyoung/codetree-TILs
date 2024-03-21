#include <iostream>
#include <string>

using namespace std;

int main() {
    int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int count_day = 0;
    for(int i = m1; i < m2; i++){
        count_day += month_days[i];
    }
    count_day += d2 - d1;

    if(count_day <= 0){
        count_day = count_day % 7;
        count_day += 7;
        cout << days[count_day % 7];
    }else{
        cout << days[count_day % 7 + 1];
    }

    return 0;
}