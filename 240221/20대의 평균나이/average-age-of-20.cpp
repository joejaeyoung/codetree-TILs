#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int age;
    int total = 0;
    int cnt = 0;

    while(1){
        cin >> age;
        if(age > 29) break;

        total += age;
        cnt++;
    }
    printf("%.2f", (float)total / cnt);
    return 0;
}