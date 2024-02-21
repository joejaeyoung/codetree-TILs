#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    float re = (float)(a + b) / (a - b);
    printf("%.2f", re);
    return 0;
}