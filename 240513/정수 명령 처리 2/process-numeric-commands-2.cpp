#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<int> que;
    string s;
    int n;

    cin >> n;

    while(n--){
        cin >> s;
        if (s == "push") {
            int tmp;
            cin >> tmp;
            que.push(tmp);
        }else if (s == "pop") {
            cout << que.front() << endl;
            que.pop();
        }else if (s == "size") {
            cout << que.size() << endl;
        }else if (s == "empty") {
            if (que.empty())
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }else if (s == "front") {
            cout << que.front() << endl;
        }

    }
    return 0;
}