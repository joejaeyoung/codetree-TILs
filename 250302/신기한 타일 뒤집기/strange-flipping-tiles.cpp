#include <iostream>

using namespace std;

#define MAX 100000

int n;
int x[1000];
char dir[1000];

int line[2 * MAX + 1];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int position = MAX;
    for(int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            while(x[i]--) {
                line[position] = 1;
                if (x[i])
                    position++;
            }
        }
        if (dir[i] == 'L') {
            while(x[i]--) {
                line[position] = -1;
                if (x[i])
                    position--;
            }
        }
    }

    int white = 0, black = 0;
    for(int i = 0; i < 2 * MAX + 1; i++) {
        if (line[i] == 1)
            black++;
        if (line[i] == -1)
            white++;
    }

    cout << white << " " << black;

    return 0;
}