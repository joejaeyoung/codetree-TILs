#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && a < c || a > c && a < b)
        cout << a;
    
    if(b > a && b < c || b > c && b < a)
        cout << b;
        
    if(c > a && c < b || c > b && c < a)
        cout << c;
        
    return 0;
}