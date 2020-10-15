#include <iostream>
#include <array>
using namespace std;

const int arsize = 5;


int main()
{
    array<int, arsize> factorial;
    factorial[0] = 1;
    factorial[1] = 2;
    for (int i = 2; i < arsize + 1; i++)
    {
        factorial[i] = factorial[i -1] * (i + 1);
        cout << " i is : "<<i << endl;

    };
    cout << "factorial result is : " << factorial[arsize] << endl;
}

//？为什么我想输入120，而是输出了720，感觉多乘了i=6,但是不知道哪里乘了这个