#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    string a;
    string b;

    cin >> a;
    cin >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a.compare(b) == 0)
        cout << "Yes";
    else
        cout << "No";
        
    return 0;
}