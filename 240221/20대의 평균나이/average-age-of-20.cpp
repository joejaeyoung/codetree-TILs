#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int age;
    float total = 0.0;
    int cnt = 0;

    while(1){
        cin >> age;
        if(age > 29) break;

        total += (float)age;
        cnt++;
    }
    printf("%.2f", total / cnt);
    return 0;
}