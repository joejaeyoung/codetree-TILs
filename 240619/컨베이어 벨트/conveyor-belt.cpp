#include <iostream>

using namespace std;

int num;
int t;

int arr[404];

void push() {
    int last = arr[num * 2 - 1];
    int tmp;
    for(int i = num * 2 - 1; i >=1; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    cin >> num >> t;

    for(int i = 0; i < num * 2; i++)
        cin >> arr[i];

    for(int i = 0; i < t ; i++) {
        push();
    }

    int idx = 0;
    for(idx = 0; idx < num; idx++) {
        cout << arr[idx] << " ";
    }
    cout << endl;
    for(idx; idx < num * 2; idx++) {
        cout << arr[idx] << " ";
    }
    return 0;
}