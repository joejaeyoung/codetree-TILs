#include <iostream>

using namespace std;

int mult(int a){
    return a * 2;
}

int plusTen(int a){
    return a + 10;
}

int main() {
    int a, b;
    cin >> a >> b;

    if(a > b){
        a = mult(a);
        b = plusTen(b);
    }else{
        a = plusTen(a);
        b = mult(b);
    }

    cout << a << " " << b << endl;
    return 0;
}