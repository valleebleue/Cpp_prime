//完成编程练习6，但使用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组
 
 #include <iostream>
 using namespace std;


struct pizza
{
    string company_name;
    int diameter;
    float weight;

};

int main()
{
    pizza *pizza_pointer = new pizza[3];

 
    cout << "Enter pizza_1's company name :" << endl; 
    cin >> pizza_pointer[0].company_name;
    cout << "Enter pizza_1's diameter in interger :" << endl; 
    cin >> pizza_pointer[0].diameter;
    cout << "Enter pizza_1's weight in float" << endl;
    cin >> pizza_pointer[0].weight;
    cout << "Enter pizza_2's company name :" << endl; 
    cin >> pizza_pointer[1].company_name;
    cout << "Enter pizza_2's diameter in interger :" << endl; 
    cin >> pizza_pointer[1].diameter;
    cout << "Enter pizza_2's weight in float" << endl;
    cin >> pizza_pointer[1].weight;  
    cout << "Enter pizza_3's company name :" << endl; 
    cin >> pizza_pointer[2].company_name;
    cout << "Enter pizza_3's diameter in interger :" << endl; 
    cin >> pizza_pointer[2].diameter;
    cout << "Enter pizza_3's weight in float" << endl;
    cin >> pizza_pointer[2].weight;  
        

    cout << "first_pizza's company name is: " << pizza_pointer[0].company_name << endl;
    cout << "first_pizza's diameter is: " << pizza_pointer[0].diameter << endl;
    cout << "first_pizza's weight is: " << pizza_pointer[0].weight << endl;
    cout << "second_pizza's company name is: " << pizza_pointer[1].company_name << endl;
    cout << "second_pizza's diameter is: " << pizza_pointer[1].diameter << endl;
    cout << "second_pizza's weight is: " << pizza_pointer[1].weight << endl;   
    cout << "third_pizza's company name is: " << pizza_pointer[2].company_name << endl;
    cout << "third_pizza's diameter is: " << pizza_pointer[2].diameter << endl;
    cout << "third_pizza's weight is: " << pizza_pointer[2].weight << endl;      
    
};


