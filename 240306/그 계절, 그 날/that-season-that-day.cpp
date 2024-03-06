#include <iostream>

using namespace std;

int isSpecialYear(int y){
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        return 1;
    }
    return 0;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if(m == 1){
        cout << "Winter" << endl;
    }else if(m == 2){
        if(isSpecialYear(y)){
            if(d <= 29){
                cout << "Winter" << endl;
            }
        }else{
            if(d <= 28){
                cout << "Winter" << endl;
            }else{
                cout << "-1";
            }
        }
    }else if(m == 3 || m == 5){
        cout << "Spring" << endl;
    }else if(m == 4){
        if(d <= 30){
            cout << "Spring" << endl;
        }else{
            cout << "-1";
        }
    }else if(m == 7 || m == 8){
        cout << "Summer" << endl;
    }else if(m == 6){
        if(d <= 30){
            cout << "Summer" << endl;
        }else{
            cout << "-1";
        }
    }else if(m == 9 || m == 11){
        if(d <= 30){
            cout << "Fall";
        }else{
            cout << "-1";
        }
    }else if(m == 10){
        cout << "Fall";
    }else if(m == 12 || m == 1){
        cout << "Winter";
    }
    return 0;
}