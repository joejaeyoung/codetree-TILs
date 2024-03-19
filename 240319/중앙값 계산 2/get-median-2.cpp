#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i % 2 == 0){
            sort(&v[0], &v[i+1]);
            cout << v[i / 2] << " ";
        }
    }

        
    return 0;
}