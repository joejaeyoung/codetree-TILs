#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            printf("%d * %d = %d", i, j, i * j);
            if (j != n - i + 1)
                printf(" / ");
        }
        printf("\n");
    }
    return 0;
}