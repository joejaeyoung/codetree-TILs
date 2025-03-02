#include <iostream>
#define OFFSET 1000

using namespace std;

int n;
int x[100];
char dir[100];
int line[3000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int locate = OFFSET;
    for(int i = 0; i < n; i++) {
        if (dir[i] == 'L') {
            for(int j = 0; j <= x[i] - 1; j++)
                line[locate--]++;
        } else {
            for(int j = 0; j <= x[i] - 1; j++) {
                line[locate]++;
                //cout << locate - OFFSET << " ";
                locate++;
            }
        }
    }
    int result = 0;
    for(int i = 0; i < 3000; i++) {
        if (line[i] >= 2) {
            result++;
            //cout << i - OFFSET << " ";
        }
    }

    //cout << "\n";
    cout << result;

    // Please write your code here.

    return 0;
}