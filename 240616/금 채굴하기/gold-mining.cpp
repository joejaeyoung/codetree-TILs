#include <iostream>

using namespace std;

int arr[21][21];
int goldprice;
int n;
int maxgoldnum = 0;

int cost(int num) {
    return (num * num) + (num + 1) * (num + 1);
}

int getGoldNum(int x, int y, int num) {
    int goldnum = 0;
    int gap = 0;

        gap = num;
        //cout << "gap : " << i << endl;
        for(int k = y - num; k <= y + num; k++) {
            if ( k <= y) {
                for(int l = x - num + gap; l <= x + num - gap; l++) {
                    //cout << "1y :  " << k << "x : " << l << endl;
                    if(k >= 0 && k < n && l >= 0 && l < n)
                        goldnum += arr[k][l];
                }
                gap--;

            }
            else {
                gap++;
                for(int l = x - num + gap; l <= x + num - gap; l++) {
                   //cout << "2y :  " << k << "x : " << l << endl;
                   if(k >= 0 && k < n && l >= 0 && l < n)
                   goldnum += arr[k][l]; 
                }
                //gap++;
            }
            if (gap < 0)
                gap = 0;
        }
        //cout << endl << endl;
    return goldnum;
}

int main() {
    cin >> n >> goldprice;

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    //중심 좌표 변경
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            //채굴 범위
            for(int num = 0; num < n / 2 + 1; num++) {
                //금 개수랑 cost 비용 비교
                //cout << "기준 : " << i << " " << j << " " << num << endl << getGoldNum(i, j, num) << endl;
                if(goldprice * getGoldNum(i, j, num) >= cost(num))
                    maxgoldnum = max(maxgoldnum, getGoldNum(i, j, num));
            }
        }
    }

    cout << maxgoldnum;
    return 0;
}

// #include <iostream>

// using namespace std;
// int main(void) {
//     int gap = 0;
//     int x = 3, y = 3;
//     for(int i = 0; i < 3; i++) {
//         gap = i;
//         cout << "gap : " << i << endl;
//         for(int k = y - i; k <= y + i; k++) {
//             if ( k <= y) {
//                 for(int l = x - i + gap; l <= x + i - gap; l++) {
//                     cout << "1y :  " << k << "x : " << l << endl;
//                 }
//                 gap--;

//             }
//             else {
//                 gap++;
//                 for(int l = x - i + gap; l <= x + i - gap; l++) {
//                    cout << "2y :  " << k << "x : " << l << endl; 
//                 }
//                 //gap++;
//             }
//             if (gap < 0)
//                 gap = 0;
//         }
//         cout << endl << endl;
//     }
// }