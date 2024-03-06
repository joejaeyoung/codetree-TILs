#include <iostream>
#include <math.h>

using namespace std;

int solve(int num){
    if(num < 10)
        return pow(num, 2);
    return solve(num / 10) + pow((num % 10), 2);
}

int main() {
    int num;

    cin >> num;
    cout << solve(num);
}