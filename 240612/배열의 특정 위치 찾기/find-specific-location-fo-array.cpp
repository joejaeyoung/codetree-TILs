#include <iostream>

using namespace std;

int arr[11];
int main() {
    int eventotal = 0;
    double thirdtotal = 0;

    for(int i = 1; i <= 10; i++) {
        cin >> arr[i];
        if(i % 2 == 0) 
            eventotal += arr[i];
        if(i % 3 == 0)
            thirdtotal += arr[i];
    }

    printf("%d %.1lf", eventotal, thirdtotal / 3);
    return 0;
}