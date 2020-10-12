#include <iostream>
using namespace std;

int desiel_consommation(){

    float desiel_consommation_100km;
    float desiel_consommation_jialun;
    float num_miles_of_100km = 62.14;
    float desiel_consommation_mile_per_jialun;

    cout<<"Enter desiel_consommation_100km: " <<endl;
    cin>> desiel_consommation_100km;
    desiel_consommation_jialun = desiel_consommation_100km/3.875;   
    cout<<"changed to desiel_consommation in jialun is: " << desiel_consommation_jialun <<endl;
    desiel_consommation_mile_per_jialun = num_miles_of_100km/desiel_consommation_jialun;
    cout<< "Desiel_consommation_mile_per_jialun is : " << desiel_consommation_mile_per_jialun <<endl;
}

int main(){
    desiel_consommation();}