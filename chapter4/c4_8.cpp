//8．完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。

#include <iostream> 

using namespace std;

struct pizza
{
    string name_of_compagy;
    int diameter;
    float weight;
};

struct *p_pizza = new pizza;

int *pt = new int;