#include <iostream>
#include <vehicle.h>

Vehicle::Vehicle() {
  setType();
  setManufacturer();
  setModel();
  setProductionYear();
}
void Vehicle::setType() {
  int num{};
  std::cout << "Please select your vehicle type: 1.Bus, 2.Car, 3.Motorcycle\t";
  std::cin >> num;
  std::cout << std::endl;
  while (num > 3 || num < 1) {
    std::cout << "The entered value is wrong, please try again:\t";
    std::cin >> num;
    std::cout << std::endl;
  }

  switch (num) {
  case 1:
    _type = VehicleBus;
    break;
  case 2:
    _type = VehicleCar;
    break;
  case 3:
    _type = VehicleMotorcycle;
    break;
  default:
    _type = noVehicleType;
    break;
  }
}

VehicleType Vehicle::getType() { return _type; }

void Vehicle::setManufacturer() {
  std::cout << "Please enter the manufacturer's name:\t";
  std::cin >> _manufacturer;
}

void Vehicle::setModel() {
  switch (_type) {
  case 1:
    std::cout << "Please enter your bus's model:\t";
    std::cin >> _model;
    break;
  case 2:
    std::cout << "Please enter your car's model:\t";
    std::cin >> _model;
    break;
  case 3:
    std::cout << "Please enter your motorcycle's model:\t";
    std::cin >> _model;
    break;
  default:
    _type = noVehicleType;
    break;
  }
}

void Vehicle::setProductionYear() {
  std::cout << "Please enter the production year:\t";
  std::cin >> _productionYear;
}