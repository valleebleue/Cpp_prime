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
    cin >> pizza_pointer[0] -> company_name;
    cout << "Enter pizza_1's diameter in interger :" << endl; 
    cin >> diameter_1;
    cout << "Enter pizza_1's weight in float" << endl;
    cin >> weight_1;
    cout << "Enter pizza_2's company name :" << endl; 
    cin >> name_2;
    cout << "Enter pizza_2's diameter in interger :" << endl; 
    cin >> diameter_2;
    cout << "Enter pizza_2's weight in float" << endl;
    cin >> weight_2;  
    cout << "Enter pizza_3's company name :" << endl; 
    cin >> name_3;
    cout << "Enter pizza_3's diameter in interger :" << endl; 
    cin >> diameter_3;
    cout << "Enter pizza_3's weight in float" << endl;
    cin >> weight_3;  
        
    pizza batch_pizza_3[3] = {{name_1,diameter_1,weight_1},{name_2,diameter_2,weight_2},{name_3,diameter_3,weight_3}};
    cout << "first_pizza's company name is: " << batch_pizza_3[0].name_of_company << endl;
    cout << "first_pizza's diameter is: " << batch_pizza_3[0].diameter << endl;
    cout << "first_pizza's weight is: " << batch_pizza_3[0].weight << endl;
    cout << "second_pizza's company name is: " << batch_pizza_3[1].name_of_company << endl;
    cout << "second_pizza's diameter is: " << batch_pizza_3[1].diameter << endl;
    cout << "second_pizza's weight is: " << batch_pizza_3[1].weight << endl;   
    cout << "third_pizza's company name is: " << batch_pizza_3[2].name_of_company << endl;
    cout << "third_pizza's diameter is: " << batch_pizza_3[2].diameter << endl;
    cout << "third_pizza's weight is: " << batch_pizza_3[2].weight << endl;      
    
};


