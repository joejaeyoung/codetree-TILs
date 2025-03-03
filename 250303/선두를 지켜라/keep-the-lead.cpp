#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

unsigned int dis[1000001];
unsigned int dis2[1000001];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> v[i] >> t[i];

    for (int i = 0; i < M; i++) cin >> v2[i] >> t2[i];

    // Write your code here!

    int aTotalTime = 0;
    int bTotalTime = 0;
    for(int i = 0; i < N; i++) {
        while(t[i]--) {
            dis[aTotalTime] = dis[aTotalTime - 1] + v[i];
            aTotalTime++;
        }
    }

    for(int i = 0; i < M; i++) {
        while(t2[i]--) {
            dis2[bTotalTime] = dis2[bTotalTime - 1] + v2[i];
            bTotalTime++;
        }
    }

    // for(int i = 0; i <= aTotalTime; i++) {
    //     cout << dis[i] << " ";
    // }
    // cout << endl;

    // for(int i = 0; i <= aTotalTime; i++) {
    //     cout << dis2[i] << " ";
    // }
    // cout << endl;


    int cnt = 0;
    int winner = 0;
    for(int i = 0; i <= aTotalTime; i++) {
        if (dis[i] > dis2[i]) {
            if (winner == 2) {
                cnt++;
            }
            winner = 1;
        }

        if (dis[i] < dis2[i]) {
            if (winner == 1) {
                cnt++;
            }
            winner = 2;
        }
    }

    cout << cnt;
    return 0;
}