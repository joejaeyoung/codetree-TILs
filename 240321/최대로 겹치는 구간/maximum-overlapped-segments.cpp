#include <iostream>
#include <cstring>
#include <algorithm>

#define OFFSET 100

using namespace std;

int main() {
    int arr[202];
    memset(arr, 0, 808);

    int n;
    cin >> n;

    int start, en;
    while(n--){
        cin >> start >> en;
        for(int i = start; i < en; i++)
            arr[i]++;
    }
    cout << *max_element(begin(arr), end(arr)) << endl;
    return 0;
}