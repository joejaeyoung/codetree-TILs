#include <iostream>
#include <algorithm>

using namespace std;

int array_size;
int square[21][21];
int result;

void input();

void get_result(int x, int y) {
    //사각형 가로 세로 길이 지정
    int total;
    //cout << "시작 좌표 x: " << x << " y: " << y << endl;
    for(int width = 2; width < array_size; width++) {
        for(int height = 2; height < array_size; height++) {

            total = 0;
            //square 밖으로 벗어나 터진 구간.
            if (x - height + 1 < 0 || y - width - height + 2 < 0 || x + width - 1 >= array_size) {
                continue;
            }
            
            //cout << "가로 :"<<width<<" 세로:"<<height << " ";
            int tmp_x = x;
            int tmp_y = y;

            //1. 수행
            for(int i = 0; i < width - 1; i++) {
                total += square[tmp_y][tmp_x];
                //cout << "더해짐 : " << square[tmp_y][tmp_x] << endl;
                tmp_x++;
                tmp_y--;
            }

            //2. 수행
            for(int i = 0; i < height - 1; i++) {
                total += square[tmp_y][tmp_x];
                //cout << "더해짐 : " << square[tmp_y][tmp_x] << endl;
                tmp_x--;
                tmp_y--;
            }

            //3. 수행
            for(int i = 0; i < width - 1; i++) {
                total += square[tmp_y][tmp_x];
                //cout << "더해짐 : " << square[tmp_y][tmp_x] << endl;
                tmp_x--;
                tmp_y++;
            }

            //4. 수행
            for(int i = 0; i < height - 1; i++) {
                total += square[tmp_y][tmp_x];
                //cout << "더해짐 : " << square[tmp_y][tmp_x] << endl;
                tmp_x++;
                tmp_y++;
            }
            //cout << "결과: " << total << endl;
            result = max(total, result);
            total = 0;
        }
    }
}

int main() {
    input();
    result = 0;

    //시작 좌표
    for(int y = 0; y < array_size; y++) {
        for(int x = 0; x < array_size; x++) {
            get_result(x, y);
        }
    }
    cout << result;
    return 0;
}

void input() {
    cin >> array_size;
    for(int i = 0; i < array_size; i++) {
        for(int j = 0; j < array_size; j++) {
            cin >> square[i][j];
        }
    }
}