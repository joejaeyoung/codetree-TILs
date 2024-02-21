#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int total = 1;
    for(int i = 1; i <= b; i++)
    {
        if(i % a == 0)
            total *= i;
    }

    cout << total;

    return 0;
}