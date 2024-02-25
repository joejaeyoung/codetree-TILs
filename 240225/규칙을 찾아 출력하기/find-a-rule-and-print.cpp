#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i == 0){
            for(int j = 0; j < n - 1; j++){
                cout << "* ";
            }
        }
        if(i >= 1){
            for(int j = 0; j < i; j++){
                cout << "* ";
            }
            for(int j = i; j < n - 1; j++){
                cout << "  ";
            }
        }
        cout << "*\n";
    }    
    return 0;
}