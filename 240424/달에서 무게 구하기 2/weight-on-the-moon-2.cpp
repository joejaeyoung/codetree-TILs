#include <iostream>
#include <stdio.h>

using namespace std;

#define ROBO_WEIGHT 147
#define GRAVITY_RATIO 0.165

int main() {
    printf("147 * 0.16500 = %.5f", ROBO_WEIGHT * GRAVITY_RATIO);
    return 0;
}