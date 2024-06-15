#include <iostream>

using namespace std;

int arr[101][101];
int main() {
    int count = 0;
    int n, m;
    cin >> n >> m;

    //init array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    //완탐 x축 기준 가로
    for(int i = 0; i < n; i++) {
        int sequence = 0;
        for(int j = 0; j < n; j = j) {
            int tmp = 0;
            int num = arr[i][j];

            while(j < n && num == arr[i][j]) {
                j++;
                tmp++;
                //cout << i << " " << j << endl;
            }
            sequence = max(sequence, tmp);
        }
        if(sequence >= m)
            count++;
    }
    //cout << count << " ";

    //완탐 y축 기준 세로
    for(int j = 0; j < n; j++) {
        int sequence = 0;
        for(int i = 0; i < n; i = i) {
            int tmp = 0;
            int num = arr[i][j];

            while(i < n && num == arr[i][j]) {
                i++;
                tmp++;
            }
            sequence = max(sequence, tmp);
            //cout << "세로 점검" << sequence << endl;
        }
        if(sequence >= m) {
            count++;
            //cout << "세로" << sequence << endl;
        }
    }
    cout << count;
    return 0;
}