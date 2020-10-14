#include <iostream>
#include <array>
using namespace std;

int main()
{
    float score_1;
    float score_2;
    float score_3;
    float mean_a3;
    cout << "enter the first score :" <<endl;
    cin >> score_1;
    cout << "enter the second score :" <<endl;
    cin >> score_2;  
    cout << "enter the third score :" <<endl;
    cin >> score_3;  
    array<float,3> a3 = {score_1,score_2,score_3};
    mean_a3 = (a3[0] + a3[1] + a3[2]) / 3;
    cout << "the mean of three scores is : " << mean_a3 << endl;    
};