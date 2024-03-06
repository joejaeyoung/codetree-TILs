#include <iostream>

using namespace std;

int isSpecialYear(int y){
    if(y % 4 == 0){
        if(y % 100 == 0 && y % 400 == 0){
            return 1;
        }
        if(y % 100 == 0){
            return 0;
        }
        return 1;
    }
    return 0;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if(m == 2){
        if(isSpecialYear(y)){
            if(d >= 29){
                cout << "Winter";
                return 0;
            }
        }else if(d <= 28){
            cout << "Winter";
            return 0;
        }else{
            cout << -1;
            return 0;
        }
        return 0;
    }

    if(m >= 3 && m <= 5){
        if(m == 3 || m == 5){
            if(d <= 31){
                cout << "Spring";
                return 0;
            }
        }else if(m == 4){
            if(d <= 30){
                cout << "Spring";
                return 0;
            }else{
                cout << -1;
                return 0;
            }
        }else{
            cout << -1;
            return 0;
        }
        return 0;
    }

    if(m >= 6 && m <= 8){
         if(m == 7 || m == 8){
            if(d <= 31){
                cout << "Winter";
                return 0;
            }
        }else if(m == 6){
            if(d <= 30){
                cout << "Winter";
                return 0;
            }else{
                cout << -1;
                return 0;
            }
        }else{
            cout << -1;
            return 0;
        }
        return 0;
    }

    if(m >= 9 && m <= 11){
        if(m == 10){
            if(d <= 31){
                cout << "Fall";
                return 0;
            }
        }else if(m == 9 || m == 11){
            if(d <= 30){
                cout << "Fall";
                return 0;
            }else{
                cout << -1;
                return 0;
            }
        }else{
            cout << -1;
            return 0;
        }
        return 0;
    }

    if(m == 12 || m == 1){
        if(d <= 31){
            cout << "Winter";
            return 0;
        }else{
            cout << -1;
            return 0;
        }
        return 0;
    }

    return 0;
}