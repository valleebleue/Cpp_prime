
#include <iostream> 
#include <cstring>
using namespace std;

int main(){
    string last_name;
    string first_name;
    string whole_name;
    cout << "Please enter your last name : ";
    cin >> last_name;
    cout << "Please enter your first name : ";
    cin >> first_name;
    whole_name = last_name + " " + first_name;
    cout << whole_name;
    return 0;}