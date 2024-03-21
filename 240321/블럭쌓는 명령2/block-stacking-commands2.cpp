#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void printingArr(int le, int ri, int *arr){
    if(le > ri){
        int tmp = le;
        le = ri;
        ri = tmp;
    }
    for(int i = le; i <= ri; i++)
        arr[i]++;
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[101];
    memset(arr, -1, sizeof(arr) / 4);

    int a, b;
    while(k--){
        cin >> a >> b;
        printingArr(a, b, arr);
    }

    cout << (*max_element(arr, arr + n)) + 1 << endl;

    return 0;
}