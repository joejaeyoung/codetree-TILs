#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int digits[20] = {};
    int cnt = 0;

    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    int num = 0;

    for(int i = 0; i < n.size(); i++){
        num = num * a + n[i] - '0';
        //cout << i << " : " << num << endl;
    }
    //cout << num << endl;
    
    while(true){
        if(num < b){
            digits[cnt++] = num;
            break;
        }
        digits[cnt++] = num % b;
        num /= b;
    }
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];

    return 0;
}