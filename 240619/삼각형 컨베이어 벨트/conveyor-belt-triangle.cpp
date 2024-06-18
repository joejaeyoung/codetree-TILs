#include <iostream>

using namespace std;

int num;
int t;
int arr[601];

void push() {
    int last = arr[num * 3 - 1];
    for(int i = num * 3 - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    cin >> num >> t;

    for(int i = 0; i < num * 3; i++)
        cin >> arr[i];

    while(t--)
        push();
    
    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = num; i < num * 2; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = num * 2; i < num * 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}