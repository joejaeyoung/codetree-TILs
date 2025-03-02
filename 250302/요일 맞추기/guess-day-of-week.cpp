#include <iostream>
#include <cstring>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string str[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string minusStr[] = {"Mon", "Sun", "Sat", "Fri", "Thu", "Wed", "Tue"};
    
    int startTime = 0;
    for(int i = 1; i < m1; i++) {
        startTime += monthDays[i - 1];
    }
    startTime += d1;

    int endTime = 0;
    for(int i = 1; i < m2; i++) {
        endTime += monthDays[i - 1];
    }
    endTime += d2;

    //cout << startTime << " " << endTime << "\n";

    //미래
    int days = 0;
    if (startTime < endTime) {
        while(1) {
            if (m1 == m2 && d1 == d2)
                break;

            days++;
            d1++;
            if (d1 > monthDays[m1 - 1]) {
                m1++;
                d1 = 1;
            }
        }
    } 
    //과거
    else {
        while(1) {
            if (m2 == m1 && d2 == d1)
                break;
            days--;
            d1--;

            if (d1 == 0) {
                m1--;
                d1 = monthDays[m1 - 1];
            }
        }
    }
    if (days >= 0){
        cout << str[days % 7];
    } else {
        cout << minusStr[days % 7];
    }
    return 0;
}