#include <iostream>

#define MAX_N 1000
#define MAX_R 200000
#define OFFSET 100000

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];

int black_checked[MAX_R + 1];
int white_checked[MAX_R + 1];
int num[MAX_R + 1];

void print(int left, int right, char dir){
    left += OFFSET;
    right += OFFSET;

    if(dir == 'L'){
        for(int i = left; i < right; i++){
            white_checked[i]++;
            num[i] = -1;
        }
    }else{
        for(int i = left; i < right; i++){
            black_checked[i]++;
            num[i] = 1;
        }
    }
}

int main() {
    cin >> n;
    
	int cur = 0;
	
    for(int i = 0; i < n; i++) {
		int distance;
		char direction;
        cin >> distance >> direction;
		
		if(direction == 'L') {
            print(cur - distance, cur, 'L');
			cur -= distance;
		}
		else {
            print(cur, cur + distance, 'R');
			cur += distance;
		}
    }
    
    int white = 0;
    int black = 0;
    int grey = 0;

    for(int i = 0; i <= MAX_R; i++){
        if(white_checked[i] >= 2 && black_checked[i] >= 2){
            grey++;
        }else{
            if(num[i] == -1)
                white++;
            if(num[i] == 1)
                black++;
        }
    }
    
    cout << white << " " << black << " " << grey;
    return 0;
}