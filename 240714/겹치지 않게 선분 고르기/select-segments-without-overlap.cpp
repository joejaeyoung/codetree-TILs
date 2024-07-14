#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

#define MAX_N 15

using namespace std;

int n;
int ans;

pair<int, int> line[MAX_N];
vector<pair<int, int>> selected_segs;
bool Overlapped(pair<int, int> seg1, pair<int, int> seg2) {
    int ax1, ax2;
    tie(ax1, ax2) = seg1;

    int bx1, bx2;
    tie(bx1, bx2) = seg2;

    // 두 선분이 겹치는지 여부는
    // 한 점이 다른 선분에 포함되는 경우로 판단 가능합니다. 
    return (ax1 <= bx1 && bx1 <= ax2) || (ax1 <= bx2 && bx2 <= ax2) ||
           (bx1 <= ax1 && ax1 <= bx2) || (bx1 <= ax2 && ax2 <= bx2);
}

bool Possible() {
    for(int i = 0; i < (int)selected_segs.size(); i++)
        for(int j = i + 1; j < (int)selected_segs.size(); j++) {
            if (Overlapped(selected_segs[i], selected_segs[j]))
                return false;
        }
    return true;
}

void FindMaxCount(int cnt) {
    if(cnt == n) {
        if(Possible())
            ans = max(ans, (int)selected_segs.size());
        return ;
    }

    selected_segs.push_back(line[cnt]);
    FindMaxCount(cnt + 1);
    selected_segs.pop_back();

    FindMaxCount(cnt + 1);
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        line[i] = make_pair(x1, x2);
    }

    FindMaxCount(0);

    cout << ans;
    return 0;
}