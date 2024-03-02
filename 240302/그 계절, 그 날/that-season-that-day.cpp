#include <iostream>

using namespace std;

int get_day[12];

int is_special_year(int y){
    if(y % 4 == 0 && y % 100 && y % 400)
        return 1;
    if(y % 4 == 0 && y % 100)
        return 0;
    if(y % 4 == 0)
        return 1;
    return 0;
}

void fill_get_day(){
    get_day[0] = 31;
    get_day[1] = -1;
    get_day[2] = 31;
    get_day[3] = 30;
    get_day[4] = 31;
    get_day[5] = 30;
    get_day[6] = 31;
    get_day[7] = 31;
    get_day[8] = 30;
    get_day[9] = 31;
    get_day[10] = 30;
    get_day[11] = 31;
}

void deter_season(int y, int m, int d){
    if(m == 2){
        if(is_special_year(y) && d <= 29){
            cout << "Winter";
            return ;
        }
        if(!is_special_year && d <= 28){
            cout << "Winter";
            return ;
        }
        cout << -1;
        return ;
    }
    if(get_day[m] < d){
        cout << -1;
        return ;
    }
    if(m >= 3 && m <= 5){
        cout << "Spring";
        return ;
    }

    if(m >= 6 && m <= 8){

        cout << "Summer";
        return ;
    }

    if(m >= 9 && m <= 11){

        cout << "Fall";
        return ;
    }

    if(m == 12 || m <= 2){

        cout << "Winter";
        return ;
    }
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    deter_season(Y, M, D);
    return 0;
}