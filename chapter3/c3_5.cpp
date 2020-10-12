#include <iostream>
using namespace std;

int cal_population(){

    long long whole_world;
    long long population_US;
    long long percentage;

    cout<<"Enter the world's population: " <<endl;
    cin>> whole_world;
    cout<<"Enter US population: " <<endl;
    cin>> population_US;
    percentage = population_US/whole_world *100;
    cout<< " The population of us is " << percentage << "% of world population " <<endl;
}

int main(){
    cal_population();}