#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int tmp;
    for(int i = 4; i < 8; i++)
    {
        tmp = s[i];
        s[i] = s[i + 5];
        s[i + 5] = tmp;
    }

    cout << s;
    return 0;
}