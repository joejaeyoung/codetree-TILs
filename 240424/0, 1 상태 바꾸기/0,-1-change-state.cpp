#include <iostream>
using namespace std;

int arr[4001];
int main() {
    int num, m;
    cin >> num >> m;

    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    while(m--) {
        int a, b, c;

        cin >> a >> b >> c;
        if (a == 1) {
            arr[b - 1] = c;
        }
        else if (a == 2) {
            for(int i = b - 1; i <= c - 1; i++) {
                if(arr[i] == 0)
                    arr[i] = 1;
                else
                    arr[i] = 0;
            }
        }
        else if (a == 3) {
            for(int i = b - 1; i <= c - 1; i++) {
                arr[i] = 0;
            }
        }
        else if (a == 4) {
            for(int i = b - 1; i <= c - 1; i++) {
                arr[i] = 1;
            }
        }
    }

    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}