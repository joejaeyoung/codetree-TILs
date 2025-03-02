#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.
    int startTime = a * 60 + b;
    int endTime = c * 60 + d;

    cout << endTime - startTime;


    return 0;
}