#include <iostream>

using namespace std;

int main() {
    int tmp;
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> tmp;
        if(tmp % 2 == 0)
            count++;
    }
    
    cout << count;
    
    return 0;
}