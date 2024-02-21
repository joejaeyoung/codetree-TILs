#include <iostream>

using namespace std;

int main() {
    int b, a;
    cin >> b >> a;

    while(a <= b){
        if(b % 2 == 0)
            cout << b << " ";
        b--;
    }
    return 0;
}