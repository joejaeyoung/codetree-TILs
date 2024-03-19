#include <iostream>

using namespace std;

void getCnt(int n, int *cnt){
    if(n == 1)
        return ;
    if (n % 2 == 0)
        n /= 2;
    else
        n = n * 3 + 1;
    (*cnt)++;
    getCnt(n, cnt);
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    getCnt(n, &cnt);
    cout << cnt << endl;
    return 0;
}