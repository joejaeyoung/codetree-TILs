#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    string command;
    vector<int> v;
    int n;
    int id;
    cin >> n;

    while (n--) {
        cin >> command;
        if (command == "push_back") {
            cin >> id;
            v.push_back(id);
        }else if (command == "pop_back") {
            v.pop_back();
        }else if (command == "size") {
            cout << v.size() << endl;
        }else {
            cin >> id;
            cout << v[id - 1] << endl;
        }
    }
    return 0;
}