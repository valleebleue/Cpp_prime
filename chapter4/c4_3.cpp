//?这里哪错了？
#include <iostream> 
#include <cstring>
using namespace std;

int main(){
    char * last_name = new char[10];
    char * first_name = new char[5];
    char whole_name[80];
    //cout << "Please enter your last name : ";
    //cin >> last_name;
    //cout << "Please enter your first name : ";
    //cin >> first_name;
    strcat(whole_name, last_name);
    strcat(whole_name, first_name);
    cout << whole_name;
    return 0;}