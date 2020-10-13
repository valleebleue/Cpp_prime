//7．WilliamWingate从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：披萨饼公司的名称，可以有多个单词组成。披萨饼的直径。披萨饼的重量。
//请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用cin（或它的方法）和cout。





#include <iostream> 

using namespace std;

struct inflatable 
{
    string name_of_company;
    int diameter;
    float weight;

};

int main()
{
    cout << "Enter compagny name :" << endl;   
    getline(cin, name_of_company);
    cout << " Enter diameter :" << endl;
    cin >> diameter;
    cout << " Enter weight :" <<endl;
    cin >> weight;

    inflatable pizza{ name_of_company, diameter, weight}
};

