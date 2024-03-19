#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Spy {
    public:
        string secretCode;
        string place;
        int time;
    
    Spy(string secretCode, string place, int time){
        this -> secretCode = secretCode;
        this -> place = place;
        this -> time = time;
    }
};


int main() {
    string s1, s2;
    int i1;
    cin >> s1 >> s2 >> i1;

    Spy spy = Spy(s1, s2, i1);
    cout << "secret code : " << spy.secretCode << endl;
    cout << "meeting point : " << spy.place << endl;
    cout << "time : " << spy.time << endl;
    return 0;
}