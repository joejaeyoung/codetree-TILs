// #include <iostream>

// using namespace std;

// int a, b, c;

// int main() {
//     cin >> a >> b >> c;

//     // Please write your code here.
//     long long firstTime = 11 * 24 * 60 + 11 * 60 + 11;
//     long long endTime = a * 24 * 60 + b * 60 + c;
//     if (endTime < firstTime)
//         cout << -1;

//     cout << endTime - firstTime;


//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int a, b, c;
    cin >> a >> b >> c;
    
    // 차이를 계산합니다.
    int diff = (a * 24 * 60 + b * 60 + c) - (11 * 24 * 60 + 11 * 60 + 11);
    
	// 출력
    if(diff < 0)
        cout << -1;
    else
        cout << diff;
    return 0;
}
