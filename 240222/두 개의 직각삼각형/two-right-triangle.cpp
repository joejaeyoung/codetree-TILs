#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n * 2; j++){
            if(j < n - i){
                cout << "*";
            }
        }
        num = i * 2;
        while(num--)
            cout << " ";
        for(int j = 0; j < n; j++){
            if(j < n - i){
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}