#include <iostream>

using namespace std;

int main() {
    int total_sum = 0;

    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(i % 6 == 0 && i % 8 != 0)
            total_sum += i;
    }

    cout << total_sum;
    
    return 0;
}