#include <iostream>
using namespace std;
//为什么这个生成不了可执行的文件
int main()
{
    int num_1;
    int num_2;
    int sum = 0;
    cout << "enter a number :" << endl;
    cin >> num_1;
    cout << "enter another number " << endl;
    cin >> num_2;
    for (int i = num_1; i < num_2 + 1 ; i ++)
    {
       cout << "i is now : " << i << endl;
       sum = sum + i;
        
    }
cout << "sum is now : " << sum << endl;    
}