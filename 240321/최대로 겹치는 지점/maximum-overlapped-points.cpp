#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    int arr[101];
    memset(arr, 0, 404);

    int n;
    cin >> n;

    int x1, x2;
    while(n--){
        cin >> x1 >> x2;
        for(int i = x1; i <= x2; i++)
            arr[i]++;
    }

    cout << *max_element(begin(arr), end(arr)) << endl;
    return 0;
}