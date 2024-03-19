#include <iostream>

using namespace std;

int getN(int n){
    if (n <= 2)
        return n;
    return getN(n / 3) + getN(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << getN(n) << endl;
    return 0;
}