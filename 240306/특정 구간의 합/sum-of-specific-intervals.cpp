#include <iostream>

using namespace std;

int sumAtoZ(int a, int b, int arr[]){
    double sum = 0;
    for(int i = a; i <= b; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[101];
    int re[101][3];

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        re[i][0] = a - 1;
        re[i][1] = b - 1;
        re[i][2] = sumAtoZ(re[i][0], re[i][1], arr);
    }

    for(int i = 0; i < m; i++) {
        cout << re[i][2] << endl;
    }

    return 0;
}