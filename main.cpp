#include "vehicle.h"
#include <iostream>

int main() {
  Vehicle sina;
  std::cout << sina.getManufacturer() << " " << sina.getModel() << " " << sina.getProductionYear() << std::endl;
  return 0;
}