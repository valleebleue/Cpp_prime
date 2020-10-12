#include <iostream>
using namespace std;

int cal_time(){

    long total_seconds;
    float days;
    float hours;
    float mins;
    float seconds;
    int left_for_hours;
    int left_for_mins;
    int left_for_secs;
    int factor_change = 60;
    cout<<"Enter the number of seconds: " <<endl;
    cin>> total_seconds;
    cout<<"Next, enter the minutes of arc: " <<endl;
    days = total_seconds/(factor_change *factor_change * 24);
    left_for_hours = total_seconds%(factor_change*factor_change * 24);
    hours = left_for_hours/(factor_change*factor_change);
    left_for_mins = left_for_hours%(factor_change*factor_change);
    mins = left_for_mins/factor_change;
    left_for_secs = left_for_mins%factor_change;

    cout<< total_seconds << " seconds equal" << days << " days " <<hours <<" hours " << " mins " << mins <<" seconds "<< left_for_secs <<endl;
}

int main(){
    cal_time();}