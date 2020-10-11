#include <iostream>


void show_time()
{
  int hour;
  int minutes;
  std::cout << "Enter the number of hours:";
  std::cin >> hour;
  std::cout << "Enter the number of minutes:";
  std::cin >> minutes;
  std::cout << "Time : " << hour << " : " << minutes <<std::endl;
}

int main(){
  show_time();
}