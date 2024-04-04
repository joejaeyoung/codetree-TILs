#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 9;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(count == 0)
                count = 9;
            cout << count--;
        }
        cout << endl;
    }   
    return 0;
}