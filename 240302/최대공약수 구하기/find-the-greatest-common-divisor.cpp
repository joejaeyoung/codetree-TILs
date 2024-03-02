#include <iostream>

using namespace std;

int gcd(int a, int b) {
  int r;

  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
    int n, m;
    cin >> n >> m;

    int re = gcd(n, m);
    cout << re;
    return 0;
}