#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> st;

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if(s == "push") {
            int tmp;
            cin >> tmp;
            st.push(tmp);

        }else if(s == "size") {
            cout << st.size() << endl;
        }else if(s == "empty") {
            cout << st.empty() << endl;
        }else if(s == "pop"){
            int i = st.top();
            st.pop();
            cout << i << endl;
        }else if (s == "top") {
            cout << st.top() << endl;
        }
    }
    return 0;
}