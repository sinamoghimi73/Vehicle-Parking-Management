#ifndef _VEHICLE_H_
#define _VEHICLE_H_
#include <string>

enum VehicleType { noVehicleType, VehicleBus, VehicleCar, VehicleMotorcycle };

class Vehicle {
public:
  Vehicle();

  // setters
  void setType();
  void setManufacturer();
  void setModel();
  void setProductionYear();

  // getters
  VehicleType getType();
  std::string getManufacturer();
  std::string getModel();
  int getProductionYear();

private:
  VehicleType _type;
  std::string _manufacturer, _model;
  int _productionYear;
};

#endif