#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    string cmp;
    cin >> n >> k >> cmp;

    string s[101];
    string tmp;
    int l = 0;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp.find(cmp) == 0)
            s[l++] = tmp;
    }
    sort(s, s + l + 1);
    cout << s[k] << endl;

    return 0;
}