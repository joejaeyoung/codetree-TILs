#include <iostream>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    int sum = n;
    while(n--){
        a += sum;
        cout << a << endl;
    }
    return 0;
}