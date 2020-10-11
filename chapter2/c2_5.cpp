#include <iostream>


int cal_Fahrenhit()
{
  int i;
  std::cout << "please enter a Celcius value:";
  std::cin >> i;
  std::cout << i << " degrees Celcius is " << i *1.8 + 32 << " degrees Fahrenhit" <<std::endl;
}

int main(){
  cal_Fahrenhit();
}