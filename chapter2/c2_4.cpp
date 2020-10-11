#include <iostream>


int cal_months()
{
  int i;
  std::cout << "please enter an age \n";
  std::cin >> i;
  std::cout << "the age you entered is " << i << ".\n";
  std::cout << "the months of output is " << 12 * i <<".\n"; 

}

int main(){
  cal_months();
}

