#include "vehicle.h"
#include <iostream>

int main() {
  Vehicle sina;
  std::cout << sina.getManufacturer() << "\n" << sina.getModel() << "\n" << sina.getProductionYear() << std::endl;
  return 0;
}