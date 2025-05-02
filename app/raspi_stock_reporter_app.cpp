#include "raspi_stock_reporter/raspi_stock_reporter.hpp"
#include <iostream>

int main(){
  int result = raspi_stock_reporter::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}