#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <iostream>
using namespace std;


class Engine {
    private:
        int horsepower;
        string Fueltype;
        bool isRunning;
    public:
        Engine(int hp = 100, const string& t = "Petrol");
        int getHorsepower() const;
        string getFuelType() const;
        bool getIsRunning() const;
        void start();
        void stop();
};
#endif // ENGINE_H