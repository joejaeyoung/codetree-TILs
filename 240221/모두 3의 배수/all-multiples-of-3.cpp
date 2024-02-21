#include <iostream>

using namespace std;

int main() {
    int tmp;

    for(int i = 0; i < 5; i++){
        cin >> tmp;
        if(tmp % 3 != 0){
            cout << "0";
            return 0;
        }
    }
    cout << "1";
    return 0;
}