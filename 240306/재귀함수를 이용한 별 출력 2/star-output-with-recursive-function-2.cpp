#include <iostream>

using namespace std;

void solve(int n){
    if(n == 0)
        return;

    for(int i = 0; i < n; i++){
        cout << "* ";
    }
    cout << endl;
    solve(n - 1);
    for(int i = 0; i < n; i++){
        cout << "* ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;

    solve(n);
    return 0;
}