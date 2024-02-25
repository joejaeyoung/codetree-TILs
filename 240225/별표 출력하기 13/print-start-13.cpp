#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int j = n;
    int k = 1;
    while(j + k == n + 1 && j > 0 && k > 0) {
        for(int l = 0; l < j; l++ ) {
            cout << "* ";
        }
        cout << "\n";
        for(int m = 0; m < k; m++) {
            cout << "* ";
        }
        cout << "\n";
        j--;
        k++;
    }
    return 0;
}