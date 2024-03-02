#include <iostream>

using namespace std;

int is_special_year(int y){
    if(y % 4 == 0 && y % 100 && y % 400)
        return 1;
    if(y % 4 == 0 && y % 100)
        return 0;
    if(y % 4 == 0)
        return 1;
    return 0;
}

void deter_season(int y, int m, int d){
    if(m == 2){
        if(is_special_year(y)){
            if(d <= 29)
                cout << "Winter";
        }else{
            if(d >= 29)
                cout << -1;
        }
        return ;
    }

    if(m >= 3 && m <= 5){
        if(m == 4 && d >= 31){
            cout << -1;
            return ;
        }
        if(d > 31){
            cout << -1;
            return ;
        }
        cout << "Spring";
        return ;
    }

    if(m >= 6 && m <= 8){
        if(m == 6 && d >= 31){
            cout << -1;
            return ;
        }
        if(d > 31){
            cout << -1;
            return ;
        }
        cout << "Summer";
        return ;  
    }

    if(m >= 9 && m <= 11){
        if(m == 9 || m == 11&& d >= 31){
            cout << -1;
            return ;
        }
        if(d > 31){
            cout << -1;
            return ;
        }
        cout << "Fall";
        return ;  
    }

    if(m ==12 && m <= 2){
        if(d > 31){
            cout << -1;
            return ;
        }
        cout << "Winter";
        return ;  
    }
    cout << -1;
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    deter_season(Y, M, D);
    return 0;
}