#include <iostream>
using namespace std;

int cal_inch(){

    int height_yingcun;
    const int change_factor = 12 ;
    int num_yingchi;
    int num_yingcun;
    cout<<"please enter your heigh in yingcun: " <<endl;
    cin>> height_yingcun;
    num_yingchi = height_yingcun / change_factor;
    num_yingcun = height_yingcun % change_factor;
    cout << "your height is "<< num_yingchi << " yingchi and "<< num_yingcun <<" yingcun" << endl;

}

int main(){
    cal_inch();
}