#include "Vehicle.h"
#include <iostream>
#include <string>
#include <utility>
using namespace std;

Vehicle::Vehicle(const string& mdl, int yr, const Engine& eng, const Gps& gpsUnit)
    : model(mdl), year(yr), engine(eng), gps(gpsUnit) {
    vehicleCount++;
    cout << "A new vehicle has been created. Total vehicles: " << vehicleCount << endl;
    cout << "Vehicle " << model << " of year " << year << " created." << endl;
}
void Vehicle::displayInfo() const {
    cout << "Vehicle Info:" << endl;
    cout << "Model: " << model << ", Year: " << year << endl;
    cout << "Engine Horsepower: " << engine.getHorsepower() << ", Fuel Type: " << engine.getFuelType() << endl;
    auto coords = gps.getCoordinates();
    cout << "GPS Coordinates: (" << coords.first << ", " << coords.second << ")" << endl;
}
void Vehicle::startEngine() {
    engine.start();
}
void Vehicle::stopEngine() {
    engine.stop();
}
pair<double, double> Vehicle::getGpsCoordinates() const {
    return gps.getCoordinates();
}
void Vehicle::updateGpsCoordinates(double x, double y) {
    gps.updateCoordinates(x, y);
}
int Vehicle::vehicleCount = 0;
void Vehicle::move(double newX, double newY){
    if(engine.getIsRunning()){
        gps.updateCoordinates(newX, newY);
        cout << "Vehicle moved to new coordinates: (" << newX << ", " << newY << ")" << endl;
    } else {
        cout << "Cannot move vehicle. Engine is not running." << endl;
    }
}
int Vehicle::getVehicleCount() {
    return vehicleCount;
}