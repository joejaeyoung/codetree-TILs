#include <iostream>

using namespace std;

void solve(int n, int *num){
    if(n == 1){
        return ;
    }
    
    if(n % 2 == 0){
        (*num)++;
        solve(n / 2, num);
    }else{
        (*num)++;
        solve(n / 3, num);
    }

}

int main() {
    int n;
    cin >> n;

    int num = 0;
    solve(n, &num);
    cout << num;
}