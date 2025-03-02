#include <iostream>
#include <algorithm>

#define OFFSET 100

using namespace std;

int n;
int x1[100], x2[100];
int line[202];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    while(n--) {
        for(int j = x1[n]; j < x2[n]; j++)
            line[j + OFFSET]++;

    }

    int result = -1;
    for(int i = 0; i < 202; i++) {
        if (line[i] > result)
            result = line[i];
    }

    cout << result;
    // Please write your code here.

    return 0;
}