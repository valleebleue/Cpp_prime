//6．结构CandyBar包含3个成员，如编程练习5所示。请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择的值，然后显示每个结构的内容。

# include <iostream>
using namespace std;

struct CandyBar
{
    string mark;
    int diameter;
    float weight;
};

int main(){
    CandyBar snack[3]{
        {"company_a",13,56.5},
        {"company_b",6,60.5},
        {"company_c",15,61.5},
    };
    cout << "first company is :" << snack[1].mark << "weight is :" << snack[1].diameter << "calerie is :" << snack[1].weight << endl; 
    cout << "second company is :" << snack[2].mark << "weight is :" << snack[2].diameter << "calerie is :" << snack[2].weight << endl; 
}