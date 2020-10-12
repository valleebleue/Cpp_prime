#include <iostream>
using namespace std;

int cal_latitude(){

    float degree;
    float minutes_arc;
    float seconds_arc;
    float degree_calculated;
    float factor_change = 60.0;
    cout<<"First,enter the degree: " <<endl;
    cin>> degree;
    cout<<"Next, enter the minutes of arc: " <<endl;
    cin>> minutes_arc;
    cout<<"Finally, enter the seconds of arc: " <<endl;
    cin>> seconds_arc;
    degree_calculated = degree + minutes_arc/factor_change + seconds_arc/factor_change^2;
    cout<< degree << " of degree" << minutes_arc << " minutes " <<seconds_arc <<" seconds " << " = " << degree_calculated <<" degrees "<<endl;
}

int main(){
    cal_latitude();