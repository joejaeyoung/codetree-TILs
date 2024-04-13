#include <iostream>
#include <vector>

using namespace std;

int n, k;
vector<int> arr;

void print() {
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
void get(int depth)
{
    if(depth == n + 1) {
        print();
        return ;
    }

    for(int i = 1; i <= k; i++){
        arr.push_back(i);
        get(depth + 1);
        arr.pop_back();
    }

}
int main() {
    cin >> k >> n;

    get(1);
    return 0;
}