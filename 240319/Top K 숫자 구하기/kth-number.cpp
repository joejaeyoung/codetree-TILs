#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    if (n == 1){
        cout << v[0] << endl;
        return 0;
    }
    
    sort(v.begin(), v.end() + 1);
    for(int i = 0; i < n; i++){
        cout << i << " " << v[i] << endl;
    }
    cout << v[k - 1] << endl;
    return 0;
}