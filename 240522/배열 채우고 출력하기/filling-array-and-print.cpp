#include <iostream>

using namespace std;

char arr[10];
int main() {

    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    for(int i = 9; i >= 0; i--)
        cout << arr[i] << "";
    return 0;
}