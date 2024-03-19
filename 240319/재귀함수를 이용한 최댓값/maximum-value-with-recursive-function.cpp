#include <iostream>
#include <vector>

using namespace std;

void getMaxEle(int n, int *v) {
    if(n == 1)
        return ;
    if(v[n - 1] >= v[n - 2]) {
        v[n - 2] = v[n - 1];
    }
    return getMaxEle(--n, v);
}

int main() {
    int n;
    cin >> n;

    int v[101];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    getMaxEle(n, v);
    cout << v[0] << endl;
    return 0;
}