#include <iostream>
using namespace std;

int cal_inch(){

    float height;
    float height_yingcun;
    float height_mi;
    float weight;
    float weight_in_qianke;
    float BMI;
    const int change_factor = 12 ;
    const float yingcun_to_mi = 0.0254;
    const float bang_to_qianke = 2.2;
    int num_yingchi;
    int num_yingcun;
    cout<<"please enter your heigh in yingchi: " <<endl;
    cin>> height;
    height_yingcun = change_factor * height;
    height_mi = height_yingcun * yingcun_to_mi;
    cout<<"please enter your weight in bang: " <<endl;
    cin >> weight;
    weight_in_qianke = weight / bang_to_qianke;//如果这里被除数是浮点数，/的结果就是浮点数
    //BMI = weight_in_qianke / height_mi^2;
    cout << "weight_in_qianke is "<< weight_in_qianke << endl;
    //cout << "BMI is "<< BMI << endl;

}

int main(){
    cal_inch();
}