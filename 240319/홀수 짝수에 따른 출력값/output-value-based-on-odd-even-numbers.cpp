#include <iostream>

using namespace std;

int getSum(int n){
    if(n <= 2)
        return n;
    return n + getSum(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << getSum(n) << endl;
    return 0;
}