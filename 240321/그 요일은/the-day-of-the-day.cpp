#include <iostream>
#include <string>

using namespace std;

int NumOfDay(int m, int d){
    int monthDays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;

    for(int i = 1; i < m; i++){
        total += monthDays[i];
    }
    total += d;
    return total;
}
int main() {
    string dayList[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int m1, d1, m2, d2;
    string day_s;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day_s;
    
    int i = 0;
    for(i = 0; i < 7; i++){
        if(day_s.compare(dayList[i]))
            break;
    }
    int diff = NumOfDay(m2, d2) - NumOfDay(m1, d1);
    //cout << diff << endl;
    int week = diff / 7;
    int day = diff % 7;
    if (day <= i)
        cout << week + 2;
    else
        cout << week + 1;
    return 0;
}