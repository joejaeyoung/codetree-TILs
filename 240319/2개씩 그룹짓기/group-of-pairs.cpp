#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int max = 1;
    for(int i = 0; i <= n / 2; i++){
        if((v[i] + v[n - i - 1]) / 2 > max)
            max = v[i] + v[n - i - 1];
    }
    cout << max << endl;
    return 0;
}