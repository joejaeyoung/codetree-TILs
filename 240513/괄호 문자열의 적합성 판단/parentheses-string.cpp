#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> st;

    string s;
    cin >> s;

    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(')
            st.push(s[i]);
        if (s[i] == ')' && st.empty() == false)
            st.pop();
    }
    if (st.empty() == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}