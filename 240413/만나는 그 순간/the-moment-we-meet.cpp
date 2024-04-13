#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int b[1001];
int main() {
    int n, m;
    cin >> n >> m;

    char d;
    int t;
    //A이동
    int a_idx = 1;
    unsigned long long total_time = 0;
    for(int i = 1; i <= n; i++) {
        cin >> d >> t;
        total_time += t;
        if (d == 'R')
            while(t--) {
                a[a_idx] = a[a_idx - 1] + 1;
                a_idx++;
            }
        if (d == 'L')
            while (t--) {
                a[a_idx] = a[a_idx - 1] - 1;
                a_idx++;
            }
    }
    //B이동
    int b_idx = 1;
    for(int i = 1; i <= m; i++) {
        cin >> d >> t;
        if (d == 'R')
            while(t--) {
                b[b_idx] = b[b_idx - 1] + 1;
                b_idx++;
            }
        if (d == 'L')
            while (t--) {
                b[b_idx] = b[b_idx - 1] - 1;
                b_idx++;
            }
    }

    int sec = 0;
    //겹치는 부분 찾기
    for(int i = 1; i <= a_idx; i++) {
        //cout << a[i] << " " << b[i] << endl;
        if(a[i] == b[i]) {
            sec = i;
            break;
        }
    }
    if (sec == 0)
        cout << -1;
    else
        cout << sec;
    return 0;
}