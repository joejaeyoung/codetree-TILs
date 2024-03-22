#include <iostream>
#include <algorithm>
#include <string.h>

#define OFFSET 1000
using namespace std;

int main() {
    int arr[2001];
    memset(arr, 0, sizeof(int) * 2001);
    int n;

    int dep;
    char dir;

    cin >> n;
    while(n--){
        cin >> dep >> dir;
        if(dir == 'R'){
            for(int i = OFFSET; i < OFFSET + dep; i++)
                arr[i]++;
        }else{
            for(int i = OFFSET; i > OFFSET - dep; i--)
                arr[i]++;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 2001; i++){
        if(arr[i] >= 2)
            cnt++;
    }
    cout << cnt - 1 << endl;
    return 0;
}