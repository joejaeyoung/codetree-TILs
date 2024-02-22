#include <iostream>

using namespace std;

void print(int n, int a){
    if(a == n + 1) return;

    for(int i = 0; i < a; i++)
    {
        cout << "*";
    }
    cout << "\n\n";
    print(n, ++a);
}

void pr(int n, int a){
    if(a == 0) return;

    for(int i = 0; i < a; i++)
    {
        cout << "*";
    }
    cout << "\n\n";
    pr(n, --a);
}

int main() {
    int n;
    cin >> n;

    print(n, 1);
    pr(n, n - 1);

    return 0;
}