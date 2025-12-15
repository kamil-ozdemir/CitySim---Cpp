#include "Gps.h"
#include <iostream>
#include <string>
using namespace std; 
Gps::Gps(double x, double y): xCoordinate(x), yCoordinate(y) {
    cout << "GPS initialized at coordinates (" << xCoordinate << ", " << yCoordinate << ")" << endl;
}
pair<double,double> Gps::getCoordinates() const {
    return make_pair(xCoordinate, yCoordinate);
}
void Gps::updateCoordinates(double x, double y) {
    xCoordinate = x;
    yCoordinate = y;
    cout << "GPS coordinates updated to (" << xCoordinate << ", " << yCoordinate << ")" << endl;
}
