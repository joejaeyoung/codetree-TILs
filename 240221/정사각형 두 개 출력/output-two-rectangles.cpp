#include <iostream>

using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << '\n';
    }

}

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < 2; i++){
        print(n);
        cout << "\n";
    }
    return 0;
}