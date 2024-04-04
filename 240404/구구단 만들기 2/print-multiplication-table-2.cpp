#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 2; i <= 8; i+=2){
        for(int j = b; j >= a; j--){
            if(j != b)
                cout << " / ";
            cout << j << " * " << i << " = " << j * i;
        }
        cout << endl;
    }
    return 0;
}