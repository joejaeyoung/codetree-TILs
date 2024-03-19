#include <iostream>

using namespace std;

int getSum(int total) {
    if (total < 10)
        return total;
    else
        return (total % 10) + getSum(total / 10);
}

int main() {
    double total = 1;

    int tmp;
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        total *= tmp;
    }
    cout << getSum(total) << endl;
    return 0;
}