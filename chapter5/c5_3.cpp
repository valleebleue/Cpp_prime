//3．编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入0时，程序结束。

#include <iostream>
using namespace std;

int sum = 0;
int input = 9;

int main()
{

    while (input != 0)
    {
        cout << "please enter a number : " << endl;
        cin >> input;
        sum = sum + input;
        cout << "now sum is :" << sum << endl;
    };
};


//?这里是input一定要先赋值一个吗？我试了如果不先赋值，默认好像是0，程序没有输出