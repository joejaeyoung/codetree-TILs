#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    deque<int> deq;

    cin >> n;
    for(int i = 1; i <= n; i++)
        deq.push_back(i);

    while (deq.size() != 1) {
        deq.pop_front();
        deq.push_back(deq.front());
        deq.pop_front();
    }
    cout << deq.front() << endl;
    return 0;
}