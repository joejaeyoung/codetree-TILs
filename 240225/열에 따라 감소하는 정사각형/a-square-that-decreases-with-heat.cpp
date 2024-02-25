#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int tmp = n;
    for(int i = 0; i < n; i++){
        tmp = n;
        for(int j = 0; j < n; j++){
            cout << tmp-- << " ";
        }
        cout << "\n";
    }
    return 0;
}