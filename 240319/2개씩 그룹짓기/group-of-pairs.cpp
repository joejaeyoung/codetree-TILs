#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(2*n);
    for(int i = 0; i < (2 * n); i++)
        cin >> v[i];
    /*cout << "출력 :" << endl;
    for(int i = 0; i < 2*n; i++){
        cout << i << ":" << v[i] <<endl;
    }*/

    sort(v.begin(), v.end());
    
    /*cout << "\n정렬 :\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    */
    int max = -1;
    for(int i = 0; i <= n; i++){
        if((v[i] + v[2*n - 1 - i]) > max){
            //cout << v[i] << " " << v[2*n - 1 - i] << endl;
            max = v[i] + v[2*n - 1 - i];
        }
    }
    cout << max << endl;
    return 0;
}