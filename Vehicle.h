#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include "Engine.h"
#include "Gps.h"
#include <iostream>
using namespace std;
class Vehicle {
    private:
        string model;
        int year;
        Engine engine;
        Gps gps;
        static int vehicleCount;
    public:
        Vehicle(const string& mdl, int year, const Engine& eng = Engine(), const Gps& gpsUnit = Gps());
        void displayInfo() const;
        void startEngine();
        void stopEngine();
        pair<double, double> getGpsCoordinates() const;
        void updateGpsCoordinates(double x, double y);
        static int getVehicleCount();
        void move(double newX, double newY);   
};
#endif // VEHICLE_H