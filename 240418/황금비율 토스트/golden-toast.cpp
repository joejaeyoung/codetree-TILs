#include <iostream>
#include <list>
#include <string>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    list<char> l;
    list<char>::iterator it;
    list<char>::iterator tmp;

    it = l.end();
    while(n--) {
        char c;
        cin >> c;
        l.push_back(c);
    }

    char c;
    while(m--) {
        cin >> c;

        if (c == 'L') {
            if (it != l.begin())
                it--;
        }else if (c == 'R') {
            if (it != l.end())
                it++;
        }else if (c == 'D') {
            if(it != l.end()) {
                it = l.erase(it);
            }
        }else if (c == 'P') {
            char s;
            cin >> s;
            l.insert(it, s);
        }
    }

    for(it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
}