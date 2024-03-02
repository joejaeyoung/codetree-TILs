#include <iostream>

using namespace std;

int gcd(int n, int m){
    int r;
    while(m != 0){
        r = n % m;
        n = m;
        m = r;
    }
    return n;
}

int lcm(int n, int m){
    return (n * m) / gcd(n, m);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << lcm(n, m);
    return 0;
}