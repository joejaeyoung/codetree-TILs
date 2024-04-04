#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(i % 2 == 0){
                count++;
                cout << count << " ";
            }else{
                count += 2;
                cout << count << " ";
            }
        }
        cout << endl;
    }
    return 0;
}