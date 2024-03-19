#include <iostream>

using namespace std;

int getGcd(int a, int b){
    
    if(b == 0){
        return a;
    }else{
        return getGcd(b, a%b);
    }
}

int getLcm(int a, int b) {
    return (a * b) / getGcd(a, b);
}

int main() {
    int n;
    cin >> n;

    int arr[11];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int lcm = getLcm(arr[0], arr[1]);

    for(int i = 2; i < n; i++){
        lcm = getLcm(lcm, arr[i]);
    }
    cout << lcm << endl;
    return 0;
}