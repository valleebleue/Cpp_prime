#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<float,3> scores;
    float score_1;
    float score_2;
    float score_3;
    float mean_a3;
    cout << "enter the first score :" <<endl;
    cin >> scores[0];
    cout << "enter the second score :" <<endl;
    cin >> scores[1];  
    cout << "enter the third score :" <<endl;
    cin >> scores[2];  

    mean_a3 = (scores[0] + scores[1] + scores[2]) / 3;
    cout << "the mean of three scores is : " << mean_a3 << endl;    
};