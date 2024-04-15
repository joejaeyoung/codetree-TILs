#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    int n;

    list<int> list;

    cin >> n;
    while (n--) {
        string s;
        int i;
        cin >> s;
        if (s == "push_front") {
            cin >> i;
            list.push_front(i);
        }else if (s == "push_back") {
            cin >> i;
            list.push_back(i);
        }else if (s == "pop_front") {
            int v = list.front();
            list.pop_front();
            cout << v << endl;
        }else if (s == "pop_back") {
            int v = list.back();
            list.pop_back();
            cout << v << endl;
        }else if (s == "size") {
            cout << list.size() << endl;
        }else if (s == "empty") {
            if (s.empty()) {
                cout << 1 << endl;
            }else {
                cout << 0 << endl;
            }
        }else if (s == "front") {
            cout << list.front() << endl;
        }else {
            cout << list.back() << endl;
        }
    }
    return 0;
}