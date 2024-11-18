#include <iostream>
#include <cstring>

using namespace std;
int students[101];

int main(void) {

    int studentNum, tigNum, inputNum;
    cin >> studentNum >> inputNum >> tigNum;

    int result = -1;
    while(inputNum--) {
        int student;
        cin >> student;

        students[student] += 1;
        if (students[student] >= tigNum) {
            if (result == -1) {
                result = student;
                break;
            }
        }
    }
    if (result != -1)
        cout << result << "\n";
    else
        cout << -1 << "\n";
    return (1);
}
