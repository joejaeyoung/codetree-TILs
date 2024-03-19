#include <iostream>

using namespace std;

int main() {
    int h1, h2;
    int m1, m2;

    cin >> h1 >> m1;
    cin >> h2 >> m2;

    int totalm1 = h1 * 60 + m1;
    int totalm2 = h2 * 60 + m2;
    //cout << totalm1 << " " << totalm2;
    int sep = totalm2 - totalm1;

    cout << sep;
    return 0;
}