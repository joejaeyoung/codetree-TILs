#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<int> deq;
    int n;
    string s;

    cin >> n;
    while(n--) {
        cin >> s;
        if (s == "push_front") {
            int tmp;
            cin >> tmp;
            deq.push_front(tmp);
        }else if (s == "push_back") {
            int tmp;
            cin >> tmp;
            deq.push_back(tmp);
        }else if (s == "pop_front") {
            cout << deq.front() << endl;
            deq.pop_front();
        }else if (s == "pop_back") {
            cout << deq.back() << endl;
            deq.pop_back();
        }else if (s == "size") {
            cout << deq.size() << endl;
        }else if (s == "empty") {
            if (deq.empty())
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }else if (s == "front") {
            cout << deq.front() << endl;
        }else if (s == "back") {
            cout << deq.back() << endl;
        }
    }
    return 0;
}