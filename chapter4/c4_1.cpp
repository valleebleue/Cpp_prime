#include <iostream>
using namespace std;

int question_reponce(){

    const int artsize = 20;
    char first_name[artsize];
    char last_name[artsize];
    int age;
    char grade[1];
    char grade_actual[1];


    cout<<"What is your first name: " <<endl;
    cin.getline(first_name,artsize);
    cout<<"What is your last name: " <<endl;
    cin.getline(last_name,artsize);
    cout<<"What grade did you deserve: " <<endl;
    cin >> grade;
    grade_actual = grade -1;
    cin >> age;
    cout << "Name : "<< last_name << " , " <<first_name << endl;
    cout << "grade : " << grade_actual;
    cout <<"age : " << age;

}

int main(){
    question_reponce();}