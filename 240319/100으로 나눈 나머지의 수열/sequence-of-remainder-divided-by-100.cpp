#include <iostream>

using namespace std;

int getN(int n){
    if(n <= 2)
        return n * 2;
    return (getN(n - 1) * getN(n - 2)) % 100;
}

int main() {
    int n;
    cin >> n;

    cout << getN(n) << endl;
    return 0;
}