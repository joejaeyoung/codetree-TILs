#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;
int a;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    if (A == "Mon")
        a = 0;
    if (A == "Tue")
        a = 1;
    if (A == "Wed")
        a = 2;
    if (A == "Thu")
        a = 3;
    if (A == "Fri")
        a = 4;
    if (A == "Sat")
        a = 5;
    if (A == "Sun")
        a = 6;


    int monthDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int days = 0;
    while(1) {
        if (m1 == m2 && d1 == d2) {
            break;
        }

        days++;
        d1++;

        if (d1 > monthDays[m1 - 1]) {
            m1++;
            d1 = 1;
        }
    }

    int result = days / 7;
    if (days % 7 >= a)
        result += 1;
    cout << result;


    // Please write your code here.

    return 0;
}