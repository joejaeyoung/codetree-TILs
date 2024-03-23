#include <iostream>
#include <algorithm>
#include <cstring>

#define OFFSET 1001

using namespace std;

int main() {
    int arr[2002];
    memset(arr, 0, sizeof(int) * 2002);

    int n;
    cin >> n;
    
    int dep;
    char dir;
    int tmp = OFFSET;

    while(n--){
        cin >> dep >> dir;
        if(dir == 'R'){
            for(int i = tmp; i < tmp + dep; i++){
                arr[i]++;
            }
            tmp += dep;
        }else{
            for(int i = tmp; i > tmp - dep; i--){
                arr[i]++;
            }
            tmp -= dep;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 2002; i++){
        if(arr[i] >= 2){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}