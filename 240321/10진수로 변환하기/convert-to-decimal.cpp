#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int num = 0;

    for(int i = 0; i < s.size(); i++){
        num = num * 2 + s[i] - '0';
    }
    cout << num;
    return 0;
}