#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int aLine[1000 * 1000 + 1];
int bLine[1000 * 1000 + 1];

int main() {
    cin >> n >> m;
    
    int aPosition = 0;
    int aTime = 0;
    for (int i = 0; i < n; i++) {
        cin >> d[i] >> t[i];

        if (d[i] == 'R') {
            for(int time = 1; time <= t[i]; time++) {
                aLine[++aTime] = ++aPosition;
            }
        } else {
            for(int time = 1; time <= t[i]; time++) {
                aLine[++aTime] = --aPosition; 
            }
        }
    }

    int bPosition = 0;
    int bTime = 0;
    for (int i = 0; i < m; i++) {
        cin >> d2[i] >> t2[i];

        if (d2[i] == 'R') {
            for(int time = 1; time <= t2[i]; time++) {
                bLine[++bTime] = ++bPosition;
            }
        } else {
            for(int time = 1; time <= t2[i]; time++) {
                bLine[++bTime] = --bPosition; 
            }
        }
    }

    // for(int i = 1; i <= aTime; i++) {
    //     cout << aLine[i] << " ";
    // }
    // cout << endl;

    for(int i = 1; i <= aTime; i++) {
        if (aLine[i] == bLine[i]) {
            cout << i;
            return 0;
        }
    }
    cout << -1;

    // Please write your code here.

    return 0;
}