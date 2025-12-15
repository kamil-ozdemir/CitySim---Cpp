#ifndef GPS_H
#define GPS_H
#include <string>
using namespace std;

class Gps {
    private:
        double xCoordinate;
        double yCoordinate;
        
    public:
        Gps(double x = 0.0, double y = 0.0);
        pair<double, double> getCoordinates() const;
        void updateCoordinates(double x, double y);
};
#endif // GPS_H