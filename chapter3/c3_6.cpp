#include <iostream>
using namespace std;

int desiel_consommation(){

    long long desiel_total;
    long long distance_total;
    long long consommation_100km;

    cout<<"Enter total distance traveled: " <<endl;
    cin>> distance_total;
    cout<<"Enter total desiel used: " <<endl;
    cin>> desiel_total;
    consommation_100km = desiel_total/distance_total *100;
    cout<< " 100km consumed " << consommation_100km << " liter of desiels " <<endl;
}

int main(){
    desiel_consommation();}