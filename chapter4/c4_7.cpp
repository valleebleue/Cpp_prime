
//请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用cin（或它的方法）和cout。
//？怎么没办法用getline读取cin的两个输入？




#include <iostream> 

using namespace std;

struct pizza
{
    string name_of_company;
    int diameter;
    float weight;

};

int main()
{
    
    string name_1;
    int diameter_1;
    float weight_1;
    string name_2;
    int diameter_2;
    float weight_2;
    string name_3;
    int diameter_3;
    float weight_3;   
    cout << "Enter pizza_1's company name :" << endl; 
    cin >> name_1;
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

