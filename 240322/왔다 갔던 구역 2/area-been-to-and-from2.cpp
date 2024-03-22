#include <iostream>
#include <algorithm>
#include <string.h>

#define OFFSET 1001
using namespace std;

int main() {
    int arr[2002];
    memset(arr, 0, sizeof(int) * 2002);
    int n;

    int dep;
    char dir;

    cin >> n;
    while(n--){
        cin >> dep >> dir;
        if(dir == 'R'){
            for(int i = OFFSET + 1; i < OFFSET + dep; i++)
                arr[i]++;
        }else{
            for(int i = OFFSET - dep + 1; i < OFFSET; i++)
                arr[i]++;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 2001; i++){
        if(arr[i] >= 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}