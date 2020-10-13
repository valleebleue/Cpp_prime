//8．完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。
//？这里在new 的时候能用数据保存3个结构体吗？

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

    cout << "Enter pizza_1's company name :" << endl; 
    cin >> name_1;
    cout << "Enter pizza_1's diameter in interger :" << endl; 
    cin >> diameter_1;
    cout << "Enter pizza_1's weight in float" << endl;
    cin >> weight_1;

    pizza *pizza_pointer = new pizza;
    pizza_pointer -> name_of_company = name_1;
    pizza_pointer -> diameter = diameter_1;
    pizza_pointer -> weight = weight_1;
    cout << "first_pizza's company name is: " << pizza_pointer -> name_of_company << endl;
    cout << "first_pizza's diameter is: " << pizza_pointer -> diameter << endl;
    cout << "first_pizza's weight is: " << pizza_pointer -> weight << endl;
    
    
};