#include <iostream>


int light_years()
{
  double light_years;
  std::cout << "Enter the number of light years:";
  std::cin >> light_years;
  std::cout << light_years << " Light years = " << light_years *63240 << " astro units" <<std::endl;
}

int main(){
  light_years();
}